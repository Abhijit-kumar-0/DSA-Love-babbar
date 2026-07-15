#include<iostream>
using namespace std;

int main() {

    int a = 10;
    int *ptr = &a;
    cout << *ptr << endl;
    cout << ptr << endl;
    
    // null pointer
    int *ptr1 = 0;

    ptr++;
    cout << "0th ptr: " << ptr << endl;
    cout << "1st ptr: " << sizeof(*ptr1) << endl;

    double b = 10.4;
    double* ptr2 = &b;
    cout << "Size of b: " << sizeof(b) << endl;
    cout << "before ptr2 address: " << (ptr2) << endl;
    *ptr2++;
    cout << "After inc ptr2 address: " << (ptr2) << endl;

    char ch = 'a';
    char *ptr3 = &ch;
    cout << "before ptr3 address: " << ptr3 << endl;
    *ptr3++;
    cout << "before ptr3 address: " << ptr3 << endl;

    return 0;
}