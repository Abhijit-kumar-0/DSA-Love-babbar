// A
// B B
// C C C
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter:\n";
    cin >> n;
    // row
    int i = 1;
    while(i<=n) {
        // clm
        int j = 1;
        while(j<=i) {
            char ch =  'A' + i - 1;
            cout << ch << " ";
            j =j + 1;
        } 
        cout << endl;
        i = i + 1;
    }
}