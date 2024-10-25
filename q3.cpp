#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    
    // Input the number of balloons
    cout << "Enter the number of balloons: ";
    cin >> N;
    
    char B[N];
    
    // Input the balloon colours
    cout << "Enter the balloon colours: ";
    for(int i = 0; i < N; i++) {
        cin >> B[i];
    }
    
    // Create a map to store frequency of each balloon
    unordered_map<char, int> freq;
    
    // Count the frequency of each balloon colour
    for(int i = 0; i < N; i++) {
        freq[B[i]]++;
    }
    
    // Find the first balloon colour that has an odd frequency
    bool foundOdd = false;
    for(int i = 0; i < N; i++) {
        if(freq[B[i]] % 2 != 0) {
            cout << "Output: " << B[i] << endl;
            foundOdd = true;
            break;
        }
    }
    
    // If no balloon colour has odd frequency
    if(!foundOdd) {
        cout << "Output: All are even" << endl;
    }

    return 0;
}