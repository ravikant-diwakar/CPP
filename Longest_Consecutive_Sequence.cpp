#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int currentConsecutiveSequence = 1;
        int longestConsecutiveSequence = 0;
        for(int i=1; i<n; i++){
            if(nums[i] != nums[i-1]){
                if(nums[i] == nums[i-1] + 1){
                    currentConsecutiveSequence++;
                }
                else{
                    longestConsecutiveSequence = max(longestConsecutiveSequence, currentConsecutiveSequence);
                    currentConsecutiveSequence = 1;
                }
            }
        }
        return max(longestConsecutiveSequence, currentConsecutiveSequence);
    }
};

int main() {
    Solution solution;

    int n;
    cout << "Enter the no. of Elements : ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter Numbers : ";
    for(int i=0; i<n; i++) {
        cin>>nums[i];
    }  

    cout<<"Number of Longest Consecutive sequence : " << solution.longestConsecutive(nums) << endl;

    return 0;
}