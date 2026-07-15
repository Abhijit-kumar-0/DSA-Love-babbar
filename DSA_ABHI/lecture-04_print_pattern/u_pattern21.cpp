//    1
//   22
//  333
// 4444
#include<iostream>
using namespace std;

int main() {
    // row
    int row = 1,n;
    cin >> n;
    while(row<=n) {
        // space
        int space = n - row;
        while(space) {
            cout << " ";
            space = space - 1;
        }

        // num print
        int num = 1;
        while(num<=row) {
            cout << row;
            num = num + 1;
        } 
        row = row + 1;
        cout << endl;
    }
}