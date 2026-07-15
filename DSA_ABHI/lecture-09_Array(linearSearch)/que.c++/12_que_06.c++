// find all doublicate in an array
// {4,3,2,7,8,2,3,1} = {2,3}
#include<iostream>
#include<math.h>
using namespace std;

void doublicate(int arr[], int size);

int main(){
    int arr[12] = {3,8,3,7,23,7,11,8,21,93,11,9};
    doublicate(arr,12);

    return 0;
}
void doublicate(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(i==j){
                j++;
            }
            else if(arr[i]==arr[j]){
                cout << arr[j] << " ";
                arr[i] = 0; // store value that is not present in array. 
            }
        }
    }

}