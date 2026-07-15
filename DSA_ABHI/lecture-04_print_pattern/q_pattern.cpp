//    *
//   **
//  ***
// ****
#include<iostream>
using namespace std;

int main() {
    int row = 1;
    int n;
    cin >> n;
    // row
    while(row<=n) {
        int i = 1;
        // clm space
        while(i<=n-row) {
            cout << " ";
            i = i + 1;
        }

        // clm star
        int j = 1;
        while(j<=row) {
            cout << "*";
            j = j + 1;
        }
        row = row + 1;
        cout << "\n";
    }
}