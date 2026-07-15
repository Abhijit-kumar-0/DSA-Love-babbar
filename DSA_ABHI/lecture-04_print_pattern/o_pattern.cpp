// A 
// B C
// C D E
// D E F G
#include<iostream>
using namespace std;

int main() {
    int row = 1;
    int value = 0;
    while(row<=4) {
        int clm = 1;
        while(clm<=row) {
            char ch = 'A' + value;
            cout << ch << " ";
            value = value + 1;
            clm = clm + 1;
        }
        
        row = row + 1;
        cout << endl;
        value = value - row + 2;
    }
}