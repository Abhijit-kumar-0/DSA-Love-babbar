//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
#include<iostream>
using namespace std;

int main() {
    int row = 1, n ;
    cin >> n;
    // row
    int num = 1;
    while(row<=n) {
        // space
        int space = n-row;
        while(space>=1) {
            cout << "  ";
            space = space - 1;
        }

        // 1st half print num
        int i = 1;
        while(i<=row) {
            cout << i << " ";
            i = i + 1;
        }

        // 2nd half print num
        int j = row-1;
        while(j) {
            cout << j << " ";
            j = j - 1;
        }
        cout << endl;
        row = row + 1;
    }
    
}