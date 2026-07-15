// a .. z => print lowercase, A .. Z  => print uppercase, 0 .. 9 => this is numeric.
// ascii   0..9 => 47.. 57,    a..z =>  97..122,     A..Z => 65..90
#include<iostream>
using namespace std;

int main() {
    cout << "Enter any thing:" << endl;
    int a = cin.get();
    // cout << "value is : " << a << endl;

    if(a>=47 && a<=57) {
        cout << "This is numeric!" << endl; 
    } else if(a>=97 && a<=122) {
        cout << "LowercaseX" << endl;
    } else if(a>=65 && a<=90) {
        cout << "Uppercase" << endl;
    } else {
        cout << "Invalid character!" << endl;
    }
}