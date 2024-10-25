// Given an array arr[] of positive integers where every element appears even times except for one. Find that number occurring an odd number of times.

// Examples:

// Input: arr[] = [1, 1, 2, 2, 2]
// Output: 2
// Explanation: In the given array all element appear two times except 2 which appears thrice.
// Input: arr[] = [8, 8, 7, 7, 6, 6, 1]
// Output: 1
// Explanation: In the given array all element appear two times except 1 which appears once.
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ arr.size() ≤ 106
// 0 ≤ arri ≤ 105

// class Solution {
//   public:
//     int getSingle(vector<int>& arr) {
//         int ans = 0;
//         for(int x:arr)ans^=x;
//         return ans;
//     }
// };


// #include<bits/stdc++.h>
// #include <iostream>
// #include <vector>

// int findSingleNumber(const std::vector<int>& arr) {
//     int result = 0; // Initialize result to 0

//     // XOR all elements in the array
//     for (int num : arr) {
//         result ^= num; // Apply XOR operation
//     }

//     return result; // Return the number that appears an odd number of times
// }

// int main() {
//     // Example test cases
//     std::vector<int> arr1 = {1, 1, 2, 2, 2};
//     std::vector<int> arr2 = {8, 8, 7, 7, 6, 6, 1};

//     std::cout << "Output for arr1: " << findSingleNumber(arr1) << std::endl; // Output: 2
//     std::cout << "Output for arr2: " << findSingleNumber(arr2) << std::endl; // Output: 1

//     return 0;
// }

#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;


int findSingleNumber(vector<int>& arr) {
    int result=0;

    for(int num : arr) {
        result ^=num;
    }
    return result;

}

int main() {

        int n;
        cout<<"Enter the Number : ";
        cin>>n;

        vector<int> arr(n);

        cout<<"Enter "<< n <<" positive Number : ";

        for(int i=0; i<n; i++) {
            cin>>arr[i];

        }

        int result = findSingleNumber(arr);
        cout<<"Single Number : "<<result<<endl;


        return 0;
}