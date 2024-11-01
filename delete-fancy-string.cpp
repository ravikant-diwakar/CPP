#include<bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string makeFancyString(string s) {
        string result;
        int count = 0;

        for (int i = 0; i < s.length(); i++) {
            if (result.empty() || result.back() != s[i]) {
                count = 1; 
                result.push_back(s[i]); 
            } else {
                if (count < 2) { 
                    count++; 
                    result.push_back(s[i]);
                }
            }
        }

        return result; 
    }
};

int main() {
    Solution solution;
    string input;
    cout << "Enter string : ";
    cin >> input;
    string output = solution.makeFancyString(input);
    cout << "Fancy string: " << output << endl;
    return 0;
}
