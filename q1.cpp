/* Q1. Problem Statement –

Given a string S (input consisting) of ‘*’ and ‘#’. The length of the string is variable. The task is to find the minimum number of ‘*’ or ‘#’ to make it a valid string. The string is considered valid if the number of ‘*’ and ‘#’ are equal. The ‘*’ and ‘#’ can be at any position in the string.

 Note: The output will be a positive or negative integer based on number of ‘*’ and ‘#’ in the input string.

(*>#): positive integer

 (#>*): negative integer

 (#=*): 0

Example 1:

Input 1: ###*** -> Value of S

 Output : 0 → number of * and # are equal */


#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cout << "Enter the string: ";
    cin >> S;

    int star_count = 0, hash_count = 0;

    // Loop through each character in the string
    for(int i = 0; i < S.length(); i++) {
        char c = S[i];
        if(c == '*') {
            star_count++;
        } else if(c == '#') {
            hash_count++;
        }
    }

    // Calculate the difference
    int difference = star_count - hash_count;

    // Output the result
    cout << "Output: " << difference << endl;

    return 0;
}