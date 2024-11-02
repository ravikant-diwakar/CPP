//2490. Circular Sentence

#include<bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n = sentence.length();
        
                char lastChar = sentence[0]; 
        
        for (int i = 0; i < n; i++) {
            if (sentence[i] == ' ') {
                    if (lastChar != sentence[i + 1]) {
                        return false;
                    }
            } else {
                lastChar = sentence[i];
            }
        }
        if (lastChar != sentence[0]) {
            return false;
        }

        return true;
    }
};

int main() {
    Solution solution;
    string sentence;
    cout << "Enter sentence: ";
    cin >> sentence;
    
    bool result = solution.isCircularSentence(sentence);
    
    if (result) {
        cout << "sentence is circular" << endl;
    } else {
        cout << "sentence is not circular" << endl;
    }

    return 0;
}

