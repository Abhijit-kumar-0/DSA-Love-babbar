//       1 
//     2 3
//   4 5 6
// 7 8 9 10
#include<iostream>
using namespace std;

int main() {
    // row
    int row = 1, n;
    cin >> n;
    int num = 1;
    while(row<=n) {
        // space
        int space = 1;
        while(space<=n-row) {
            cout << "  ";
            space = space + 1;
        }

        // num print
        int i = 1;
        while(i<=row) {
            cout << num << " ";
            num = num + 1;
            i = i + 1;
        }
        row = row + 1;
        cout << endl;
     }
}