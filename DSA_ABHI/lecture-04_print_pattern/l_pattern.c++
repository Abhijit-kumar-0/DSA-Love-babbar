// A B C
// B C D
// C D E    
#include<iostream>
using namespace std;

int main() {
    int i = 1;
    int value = 0;
    // row
    while(i<=3) {
        // clm
        int j = 1;
        while(j<=3) {
            char ch = 'A' + value;
            cout << ch << " ";
            value = value + 1;
            j = j + 1;
        } 
        cout << endl;
        i = i + 1;
        value = value - 2;
    }
}

// METHOD ==> 02
// char ch = 'A' i + j -2;