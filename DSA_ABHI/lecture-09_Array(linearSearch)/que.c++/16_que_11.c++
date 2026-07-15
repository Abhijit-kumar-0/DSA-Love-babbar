// short 0 1 in increasing order by 2 pointer method solution.
#include<iostream>
using namespace std;

void printarr(int arr[], int x){
    for(int i=0; i<x; i++){
        cout << arr[i] << " ";
    }
}

  void swaparr(int arr[], int x){

    int left=0, right=x-1, temp;
    while(left<right){

        // correct position per hoon toh.
        if(arr[left]==0){
            left++;
        }else if(arr[right]==1){
            right--;
        }
        // yaha pahuch gaye toh swap kar do.
        else {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++; right--;
        }
    }
}

int main(){
    int arr[8] = {1,1,0,0,0,0,1,0};

    swaparr(arr,8);
    printarr(arr,8);
    return 0;
}