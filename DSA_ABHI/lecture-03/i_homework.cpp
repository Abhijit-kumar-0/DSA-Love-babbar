// check number prime or not
#include<iostream>
using namespace std; 

int main() {
    int num, i = 2; 
    cin >> num;

    if(num%2 !=0 && num%3 !=0 || num==2 || num==3) {
        cout << "prime";
    } else {
        cout << "Not prime";
    }

// ============== method = 02 ========
    // while(i<num) {
    //     if(num%i==0) {
    //         cout << "not prime" << i << endl; 
    //     } else {
    //         cout << "prime" << i << endl;
    //     }
    //     i = i + 1;
    // }

}