#include<iostream>
using namespace std;

int main() {
    // left shift
    cout << (15<<1) << endl; // 30
    cout << (3<<2)  << endl; // 12
    cout << (19<<1) << endl; // 38
    

    // right shift
    cout << (15>>1) << endl; // 7
    cout << (5>>2) << endl; // 1
    cout << (4>>0) << endl; // 4
}