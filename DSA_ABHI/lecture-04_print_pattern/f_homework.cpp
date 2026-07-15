#include<iostream>
using namespace std;

int main() {
    int m = 1, count = 1;
    // row
    while(m<=4) {
        // column
        int n = 1;
        while(n<=m) {
            cout << count << " ";
            n++;
            count++;
        }
        m++;
        cout << endl;
    }
}