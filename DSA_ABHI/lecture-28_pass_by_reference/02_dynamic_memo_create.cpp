#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter legth of array " << endl;
    cin >> n;
    // create dynamic memory allocation
    int *arr = new int[10];   
    
    cout << "put the numbers in array" << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++) {
        cout << arr[i] << " " ;
    }
    return 0;
}