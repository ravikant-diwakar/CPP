#include <iostream>

using namespace std;

string find(int N) {
    if ((N % 4 == 0 && N % 100 !=0) || (N % 400 == 0)) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;
    
    cout << find(year) << endl;
}