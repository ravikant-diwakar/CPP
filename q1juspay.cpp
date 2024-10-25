#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

struct Node {
    string name;
    vector<Node*> children;
    bool isLocked;
    int lockedBy;

    Node(string n) : name(n), isLocked(false), lockedBy(-1) {}
};

unordered_map<string, Node*> nodeMap;

bool canLockOrUnlock(Node* node, int uid) {
    if (node->isLocked && node->lockedBy != uid) return false;
    for (auto child : node->children) {
        if (child->isLocked || !canLockOrUnlock(child, uid)) return false;
    }
    return true;
}

bool lock(Node* node, int uid) {
    if (node->isLocked || !canLockOrUnlock(node, uid)) return false;
    node->isLocked = true;
    node->lockedBy = uid;
    return true;
}

bool unlock(Node* node, int uid) {
    if (!node->isLocked || node->lockedBy != uid) return false;
    node->isLocked = false;
    node->lockedBy = -1;
    return true;
}

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<Node*> nodes;
    for (int i = 0; i < n; ++i) {
        string nodeName;
        cin >> nodeName;
        Node* node = new Node(nodeName);
        nodes.push_back(node);
        nodeMap[nodeName] = node;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m && i * m + j + 1 < n; ++j) {
            nodes[i]->children.push_back(nodes[i * m + j + 1]);
        }
    }

    for (int i = 0; i < q; ++i) {
        int opType, uid;
        string nodeName;
        cin >> opType >> nodeName >> uid;

        Node* node = nodeMap[nodeName];
        if (opType == 1) {
            cout << (lock(node, uid) ? "true" : "false") << endl;
        } else if (opType == 2) {
            cout << (unlock(node, uid) ? "true" : "false") << endl;
        }
    }

    return 0;
}
