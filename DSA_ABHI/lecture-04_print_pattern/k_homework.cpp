// A B C
// D E F
// G H I
#include <iostream>
using namespace std;

int main() {
    char value = 0;
    // row
    int i = 1;
    while (i <= 3) {
        // column
        int j = 1;
        while (j <= 3) {
            char ch = 'A' + value;
            cout << ch << " ";
            j = j + 1;
            value = value + 1;
        }
    cout << endl;
    i = i + 1;
    }
}