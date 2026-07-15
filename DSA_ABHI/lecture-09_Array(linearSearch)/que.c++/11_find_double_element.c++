// find double element in an array.
#include<iostream>
using namespace std;

int fdublicate(int arr[], int x);
int main(){
    int arr[5] = {1, 2, 3, 4, 2};
   cout << "Duble value is : " << fdublicate(arr, 5);
    return 0;
}

int fdublicate(int arr[], int x){
    int sum = 0;

    // double element are exclude in sum.
    for(int i=0; i<x; i++){
        sum = arr[i]^sum;
    }
    // to exclude all element except double.
    for(int i=1; i<x; i++){
        sum = sum^i;
    }
    return sum;
}