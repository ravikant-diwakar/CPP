//Given an unsorted array arr and a number k which is smaller than size of the array. Find if the array contains duplicates within k distance.

#include<bits/stdc++.h>
#include <vector>

using namespace std;

class Solution {
public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        int n = arr.size();

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j <= i + k && j < n; ++j) {
                if (arr[i] == arr[j]) {
                    return true;
                }
            }
        }
        
        return false;
    }
};

int main() {
    Solution solution;

    int n, k;
    
    cout << "Enter number of elements : ";
    cin >> n;

    vector<int> arr(n);
    
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the value of k: ";
    cin >> k;

    bool result = solution.checkDuplicatesWithinK(arr, k);
    
    if (result) {
        cout << "Duplicates found within " << k << " distance." << endl;
    } else {
       cout << "No duplicates found within " << k << " distance." << endl;
    }

    return 0;
}