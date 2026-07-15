#include<iostream>
using namespace std;

int main() {
    int i = 1, m, count = 1;
    cout << "Enter number" << endl;
    cin >> m;
    // row
    while(i<=m) {
        // column
        int j = 1;
        while(j<=m) {
            cout << count << " ";
            j = j + 1;
            count++;
        }

        cout << endl;
        i = i + 1;
    }
}