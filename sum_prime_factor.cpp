#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false; // 0 and 1 are not prime
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false; // Found a factor
    }
    return true; // No factors found, it's prime
}

// Function to find and print the sum of prime factors
int sumOfPrimeFactors(int n) {
    int sum = 0;

    // Check for all numbers from 2 to n
    for (int i = 2; i <= n; i++) {
        // If i is a prime factor of n
        if (n % i == 0 && isPrime(i)) {
            sum += i; // Add to sum
            // Remove all occurrences of i from n
            while (n % i == 0) {
                n /= i;
            }
        }
    }

    return sum;
}

int main() {
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit if the input is invalid
    }

    int sum = sumOfPrimeFactors(number);
    cout << "Sum of prime factors of " << number << " is: " << sum << endl;

    return 0;
}
