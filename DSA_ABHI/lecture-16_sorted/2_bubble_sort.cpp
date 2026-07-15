/* copy the text Bubble Sort is one of the sorting algorithms that works by repeatedly swapping the adjacent elements of the array if they are not in sorted order.
You are given an unsorted array consisting of N non-negative integers. Your task is to sort the array in non-decreasing order using the Bubble Sort algorithm. */ 

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {6,2,8,4,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int k = 1; k<n; k++) {
        bool swapped = false;
        for(int i=0; i<n-k; i++) {
            if(arr[i] > arr[i+1]) {
                swap(arr[i], arr[i+1]);
                swapped = true;
            }
        }
        if(swapped==false) {
            break;
        }
    }
for(int z=0; z<n; z++) {
    cout << arr[z] << " ";
}
return 0;
}