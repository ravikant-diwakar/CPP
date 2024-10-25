#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    cout << "Palindromes between " << start << " and " << end << " are: ";

    for (int num = start; num <= end; num++) {
        int original = num;
        int reversed = 0;

        while (original > 0) {
            reversed = reversed * 10 + (original % 10);
            original /= 10;
        }

        if (num == reversed) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
