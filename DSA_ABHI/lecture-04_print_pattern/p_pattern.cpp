// D
// C D
// B C D
// A B C D
#include<iostream>
using namespace std;

int main() {
    int i = 1;
    int value = 1;
    while(i<=4) {
        int j = 1;
        while(j<=i) {
            char ch = 'A' + value + i + j;  // 'A' + n - i   => n = 4
            cout << ch << " ";
            j = j + 1;

        }
        value = value - 2;
        i = i + 1;
        cout << endl;
    }
}