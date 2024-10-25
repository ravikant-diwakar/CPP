/* Q2. Given an integer array Arr of size N the task is to find the count of elements whose value is greater than all of its prior elements.

 Note : 1st element of the array should be considered in the count of the result. For example, Arr[]={7,4,8,2,9} As 7 is the first element, it will consider in the result. 8 and 9 are also the elements that are greater than all of its previous elements. Since total of 3 elements is present in the array that meets the condition.

 Hence the output = 3.

Example 1:

Input 5 -> Value of N, represents size of Arr

 7-> Value of Arr[0]

4 -> Value of Arr[1]

 8-> Value of Arr[2]

2-> Value of Arr[3]

 9-> Value of Arr[4]

Output : 3
*/




#include <iostream>
using namespace std;

int main() {
    int N;
    
    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> N;

    int Arr[N];
    
    // Input the array elements
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < N; i++) {
        cin >> Arr[i];
    }

    int count = 1;  // First element is always counted
    int max_so_far = Arr[0];  // Keep track of the maximum element encountered

    // Loop through the array starting from the second element
    for(int i = 1; i < N; i++) {
        if(Arr[i] > max_so_far) {
            count++;  // Increment count if current element is greater than max_so_far
            max_so_far = Arr[i];  // Update max_so_far
        }
    }

    // Output the result
    cout << "Output: " << count << endl;

    return 0;
}