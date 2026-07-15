// swap alternet array element.
#include<iostream>
using namespace std;

void swapAlt(int arr[], int size){

    // swap array
    int temp;
    for(int i=0; i<size; i+=2){
        if(i+1<size)
        swap(arr[i],arr[i+1]);
        // temp = arr[i];
        // arr[i] = arr[i+1];
        // arr[i+1] = temp;
    }

    // print array
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int arr1[7] = {3,5,7,9,12,35,10};
    swapAlt(arr,10);   
    swapAlt(arr1,7);
    return 0;
}