// leetcode - 191
#include<iostream>
using namespace std;

int main() {
    cout << "Enter number" << endl;
    int n;
    cin >> n;
    int count =0;

    while(n!=0) {
        // cout << n << " ";

        if((n&1)) {
            count++;
        }
        n = n>>1;
    }
    cout << count;

}