#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    // Pointers for nums1, nums2, and the end of merged array
    int i = m - 1;  // Pointer for the last element of nums1 (actual elements)
    int j = n - 1;  // Pointer for the last element of nums2
    int k = m + n - 1;  // Pointer for the last position in nums1 (where merged elements go)

    // Merge from the back of nums1 and nums2
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];  // Place the larger element in nums1
        } else {
            nums1[k--] = nums2[j--];  // Place the larger element from nums2 into nums1
        }
    }

    // If there are still elements left in nums2, copy them
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    // Input
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;

    // Merge nums2 into nums1
    merge(nums1, m, nums2, n);

    // Output the result
    cout << "Merged array: ";
    for(int num : nums1) {
        cout << num << " ";
    }

    return 0;
}
