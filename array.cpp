// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5}; // Integers ka array

//     for (int x : arr) { // Loop har element ke liye arr mein
//         cout << x << " "; // Har element print karo
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {10, 20, 30, 40, 50}; // Integers ka array
//     int sum = 0; // Sum store karne ke liye variable

//     // Loop har element ke liye arr mein
//     for (int x : arr) {
//         sum+=x;
//         sum += x; // x ko sum mein add karo
//     }

//     cout << "Total Sum: " << sum << endl; // Total sum print karo

//     return 0;
// }


// #include <iostream>

// int main() {
//     int n; // Number of elements to add
//     std::cout << "Enter the number of elements you want to add: ";
//     std::cin >> n;

//     double sum = 0; // Variable to store the sum
//     double number; // Variable to store each number

//     // Loop to get numbers from the user
//     for (int i = 0; i < n; ++i) {
//         std::cout << "Enter number " << (i + 1) << ": ";
//         std::cin >> number;
//         sum += number; // Add the number to the sum
//     }

//     // Output the total sum
//     std::cout << "The total sum is: " << sum << std::endl;

//     return 0;
// }

#include <iostream>

int main() {
    // Predefined numbers
    double numbers[] = {5.5, 10.2, 3.3, 8.1};
    double sum = 0; // Variable to store the sum

    // Calculate the sum of the predefined numbers
    for (double number : numbers) {
        sum += number;
    }

    // Output the total sum
    std::cout << "The total sum is: " << sum << std::endl;

    return 0;
}




