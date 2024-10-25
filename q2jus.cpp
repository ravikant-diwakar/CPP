#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int power = 0;
    int xy_count = 0;  // Tracks the count of available X or Y from XY transformations.
    int yx_count = 0;  // Tracks the count of available Y or X from YX transformations.

    // Traverse the string character by character
    for (char c : s) {
        if (c == 'X') {
            if (yx_count > 0) {
                // If there was a previous YX, we can transform it
                power++;
                yx_count--;
            } else {
                // Otherwise, we store this X for future XY
                xy_count++;
            }
        } else {  // c == 'Y'
            if (xy_count > 0) {
                // If there was a previous XY, we can transform it
                power++;
                xy_count--;
            } else {
                // Otherwise, we store this Y for future YX
                yx_count++;
            }
        }
    }

    cout << power << endl;
    return 0;
}
