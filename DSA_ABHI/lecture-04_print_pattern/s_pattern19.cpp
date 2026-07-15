// ****
//  ***
//   ** 
//    *
#include<iostream>
using namespace std;

int main() {
    int row = 1, n;
    cin >> n;
    while(row<=n) {
        // space
        int space = 1;
        while(space<row) {
            cout << " ";
            space = space + 1;
        }

        // star
        int star = n - row + 1;
        while(star) {
            cout << "*";
            star = star - 1;
        }
        cout << endl;
        row = row + 1;
    }
}