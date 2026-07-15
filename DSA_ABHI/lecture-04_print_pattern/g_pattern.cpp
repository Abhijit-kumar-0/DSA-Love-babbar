// Important question
// 1
// 2 3
// 3 4 5
// 4 5 6 7
#include <iostream>
using namespace std;

int main() {
    // row
    int m = 1;
    while (m <= 4)
    {
        // column
        int n = m;
        while (n <= 2*m-1) 
        {
            cout << n << " ";
            n = n + 1;
        }
        cout << endl;
        m = m + 1;
    }
}