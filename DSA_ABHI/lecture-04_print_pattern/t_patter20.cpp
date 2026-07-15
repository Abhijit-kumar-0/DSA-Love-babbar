// 1111
//  222
//   33
//    4
#include<iostream>
using namespace std;

int main() {
    // row
    int row = 1,n; 
    cin >> n;
    while(row<=n) {
        // space
        int space = 1;
        while(space<row) {
            cout << " ";
            space = space + 1;
        }

        // num print
        int num = 1;
        while(num<=n-row+1) {
            cout << row;
            num = num + 1;
        }
        cout << endl;
        row = row + 1;
    }
}