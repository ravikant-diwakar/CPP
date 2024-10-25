// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     if (n <= 0) {
//         cout << "Please enter a positive number of elements." << endl;
//         return 1;
//     }

//     double sum;
//     double number;
    
//     for (int i = 0; i < n; i++) {
//         cout << "Enter number " << (i + 1) << ": ";
//         cin >> number;
//         sum += number;
//     }

//     double average = sum / n;

//     cout << "Sum: " << sum << endl;
//     cout << "Average: " << average << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin>>n;

    if (n<=0) {
        cout << "Enter positive integer";
        return 1;
        }

        double sum;
        double number;

        for (int i=0; i<n; i++) {
            cout << "Enter number" << (i+1) << ": ";
            cin >> number;
            sum+=number;
    }

    double average = sum/n;

        cout << "sum:" <<sum<<endl;
        cout << "Average"<<average<<endl;

    return 0;
}
