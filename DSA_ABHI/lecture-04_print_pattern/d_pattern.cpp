#include<iostream>
using namespace std;

int main() {
    int m = 1;
    // row
    while(m<=4) {
        // column 
        int n = 1;
        while(n<=m) {
            cout << "*";
            n = n + 1;
        }
        cout << endl;
        m = m + 1; 
    }
}