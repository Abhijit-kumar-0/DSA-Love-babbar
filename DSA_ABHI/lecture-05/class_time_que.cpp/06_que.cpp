// leetcode - 1281
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    int product = 1;
    int sum = 0;
    for(int i =0; n!=0; i++) {
        int digit = n%10;
        product = product * digit;
        sum = sum + digit;

        n = n/10;
    }

    int result = product - sum;
    cout <<  result;
}