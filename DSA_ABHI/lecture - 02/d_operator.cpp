#include<iostream>
using namespace std;

int main() {
    float a = 2/5;  // int/int = int
    cout << a << endl;   // 0

    int b = 2.0/5;   // float/int = float
    cout << b << "\n";  // 0

    float B = 2.0/5;   // float/int = float
    cout << B << "\n";  // 0.4

}