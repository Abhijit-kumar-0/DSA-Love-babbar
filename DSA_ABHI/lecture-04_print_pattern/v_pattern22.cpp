// 1 2 3 4
//   2 3 4
//     3 4
//       4
#include<iostream>
using namespace std;

int main() {
    // row
    int row = 1, n;
    cin >> n;
    while(row<=n) {
        // space
        int space = 1;
        while(space<row) {
            cout << "  ";
            space = space + 1;
        }

        // num print
        int num = row;
        while(num<=n) {
            cout << num << " ";
            num = num + 1;
        }
        row = row + 1;
        cout << endl;
    }
}