#include<bits/stdc++.h>
#include <iostream>
#include <string>


using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }
        string doubled = s + s;
        return doubled.find(goal) != string::npos;
    }
};

int main() {
    Solution sol;
    string s = "abcde";
    string goal = "cdeab";
    
    if (sol.rotateString(s, goal)) {
        cout << "True\n";
    } else {
        cout << "False\n";
    }

    return 0;
}
