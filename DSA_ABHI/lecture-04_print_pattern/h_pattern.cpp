// 1
// 2 1
// 3 2 1
// 4 3 2 1
#include<iostream>
using namespace std;

int main() {
    // row
    int m = 1;
    while(m<=4) {
        // column
        int n = 1;
        int value = m;
        while(n <= value) {
            cout << value << " ";
            value -= 1;
        }
        cout << endl;
        m = m + 1;
    }
}