#include<iostream>
#include<string>
using namespace std;

void check(int x, string arr[]) {
    // base case
    if(x == 0) {
        return;
    }

    // process
    int digit = x%10;
    x/=10;

    // recursive relation
    check(x, arr);
    
    cout << arr[digit] << " ";
}

int main() {

    long long num;
    cin >> num;
    string arr[10] = {"zero","one","tow","three","four","five","six","seven","eight","nine"};
    check(num, arr);
    return 0;
}