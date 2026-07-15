#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    bool isprime = 1;
    for(int i = 2; i<num; i++) {
        if(num%i==0) {
             isprime = 0;
            break;
        }
    }

    if(isprime ==  1) {
        cout << "is prime number";
    } else {
        cout << "is  not a prime number";
    }
 
}