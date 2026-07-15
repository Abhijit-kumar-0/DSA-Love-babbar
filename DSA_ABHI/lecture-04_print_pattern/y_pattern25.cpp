// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
#include<iostream>
using namespace std;

int main() {
    int row = 1,n = 5;
    // cin >> n;
    // row
    while(row<=n) {
        // 1st half num
        int i = 1;
        while(i<=n-row+1) {
            cout << i ;
            i = i + 1;
        }

        // 2nd half star print
        int j = 2*row - 2;
        while(j>=1) {
            cout << "*";
            j = j - 1;
        }

        // 3rd half print num
        int k = n+1-row;
        while(k>=1) {
            cout << k ;
            k = k - 1;
        }
        row = row + 1;
        cout << endl;
    }
}