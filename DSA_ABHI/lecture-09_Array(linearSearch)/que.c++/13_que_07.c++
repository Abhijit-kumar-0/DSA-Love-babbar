// find intersection element of two array. , arrays are writing in increasing order.
// i.e = {2,3,6,9,19,35}
#include<iostream>
using namespace std;
void intersection(int arr[], int arr1[], int m,int n);
int main(){
    int arr[6] = {1,3,5,7,8,9}; 
    int arr1[5] = {2,3,8,9,10}; 

    intersection(arr,arr1,6,5);
    return 0;
}
void intersection(int arr[], int arr1[], int m,int n){
    int i = 0, j=0;

        while(i<m && j<n){
        if(arr[i]==arr1[j])
        {
            cout << arr[i] << " ";
            i++,j++;
        }
        else if(arr[i]>arr1[j])
        {
            j++;
        }
        else 
        {
            i++;
        }
    }

}