// A 
// B C
// D E F
// G H I J
#include<iostream>
using namespace std;

int main() {
    int n;
    int value = 0;
    cout << "Enter:\n";
    cin >> n;
    int row = 1; 
    while(row<=n) {
        // clm
        int clm = 1;
        while(clm<=row) {
            char ch = 'A' + value;
            cout << ch << " ";
            clm = clm + 1;
            value = value + 1;
        }
        cout << endl;
        row = row + 1;
    }
}