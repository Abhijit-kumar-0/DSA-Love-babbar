// find unique element in array.
#include<iostream>
using namespace std;

int uninque(int arr[],int size);
int main(){
    int arr[10];
    int x;
    cout << "Enter the size of array" << endl;
    cin >> x;
    cout << "Enter the elements" << endl;
    for(int i=0; i<x; i++){
    cin >> arr[i];
    }
    cout << "Unique element is: " << uninque(arr,x) << endl;
    
    return 0;
}
// Xor = '^'  -> 3^3 = 0;
int uninque(int arr[], int size){
    int result = 0;
    for(int i=0; i<size; i++){
        result = arr[i] ^ result;
    }
    return result;
}