// A B C
// A B C
// A B C    
#include<iostream>
using namespace std;

int main() {
    int n;
    int i = 1;
    cout << "Enter\n";
    cin >> n;
    // row
    while(i<=n) {
        // column
        int j = 1;
        while(j<=n) {
        char ch = 'A' + j - 1;
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1; 
    }
}