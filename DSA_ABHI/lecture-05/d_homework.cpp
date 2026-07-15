// print all sum from 1 to nth number
#include<iostream>
using namespace std;

int main() {
    int n;
    int total = 0;
    cout << "Enter the number\n";
    cin >> n;
    for(int i = 1; i<=n; i++) {
        total += i;
    }
    cout << "Sum of 1 to " << n << "number is: " << total;
}
