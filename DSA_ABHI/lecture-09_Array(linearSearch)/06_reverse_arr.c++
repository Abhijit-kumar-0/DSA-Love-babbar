#include<iostream>
using namespace std;

void reversArr(int arr[],int size){
    int temp;
    for(int i=0; i<=size/2; i++){

        // swap
        temp = arr[i];
        arr[i] = arr[(size-1)-i];
       arr[(size-1)-i] = temp;
    }
      for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int brr[9]= {8,22,6,17,38,9,0,3,7};
    int abhi[7] = {11,12,13,14,15,16,17};
    reversArr(arr,10);
    reversArr(brr,9);
    reversArr(abhi,7);
    
    return 0;
}