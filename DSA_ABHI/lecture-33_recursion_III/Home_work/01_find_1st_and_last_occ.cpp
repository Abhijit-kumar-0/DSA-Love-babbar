#include<iostream>
using namespace std;

void firstOcc(int arr[], int size, int key, int n) {

    // basecase
    if(size == 0) {
        cout << "first element not found" << endl;
        return;
    }
    if(arr[0] == key) {
        cout << "first element at idx: " << n-size << endl;
        return;
    }
    return firstOcc(arr+1, size-1, key, n);
}

void lastOcc(int arr[], int size, int key) {

    //base case 
    if(size == 0){
        cout << "last element not found" << endl;
        return;
    }
    if(arr[size-1] == key) {
        cout << "last element at idx: " << size-1 << endl;
        return;
    }
    lastOcc(arr, size-1, key);
}


int main() {
    int arr[5] = {6,3,5,0,6};
    int key;
    cout << "Enter number: \n";
    cin >> key;
    firstOcc(arr, 5, key,5);
    lastOcc(arr, 5, key);
    return 0;
}