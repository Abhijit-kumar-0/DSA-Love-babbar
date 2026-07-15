// IMPORTANT 
// A A A
// B B B
// C C C
#include<iostream>
using namespace std;

int main() {
    int n , m = 1;
    cout << "Enter \n";
    cin >> n;
    // row
    while(m <= n) {
        // column
        int i = 1;
        char ch = 'A' + m -1;
        while(i <= n) {
            cout << ch << " ";
            i = i + 1;
        }
        cout << endl;
        m = m + 1;
    }
}