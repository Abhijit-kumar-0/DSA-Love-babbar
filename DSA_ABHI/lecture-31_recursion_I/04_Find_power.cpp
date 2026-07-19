#include<iostream>
using namespace std;

int power(int e, int b) {

    // base case
    if(e == 0) {
        return 1;
    }

    int SmallProb = power(e-1, b);
    int BigProb = b * SmallProb;

    return BigProb;

}

int main() {

    int base, exponent;
    cin >> base >> exponent;

    cout << power(exponent,base);
    return 0;
}