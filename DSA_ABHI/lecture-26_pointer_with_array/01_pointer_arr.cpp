#include<iostream>
using namespace std;

int main() {
 
    /*
    int arr[4] = {1,122,45,67};

    cout << "1st: " << arr << endl;
    cout << "2nd: " << &arr[0] << endl;

    cout << "1st idx address: " << arr+1 << endl;
    cout << "1st idx address: " << &arr[1] << endl;
    cout << "1st idx address: " << *(arr+1) << endl;

    cout << "new method : " << 3[arr] << endl;

    cout << "5th: " << sizeof(arr) << endl;
    cout << "6th: " << sizeof(&arr) << endl;
    cout << "7th: " << sizeof(arr[0]) << endl;
    cout << "8th: " << sizeof(&arr[0]) << endl;
    cout << "9th: " << sizeof(*arr) << endl;


    int arr[10]= {3,9,12,55};
    cout << &arr << endl;
    cout << arr << endl;
    cout << &arr[0] << endl;

    int *ptr = &arr[0];
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    */

   int arr[10] = {2,3,6,7};
// ERROR
    // arr = arr + 1;

    int *ptr = &arr[1];

    cout << *ptr << endl;
    *ptr = 23;
    cout << *ptr << endl;

    return 0;
}