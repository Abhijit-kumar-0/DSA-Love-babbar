// merge two sorted array in first array
#include<iostream>
using namespace std;

void merge(int arr1[], int m , int arr2[], int n) {
    int i = 0, j = 0;
    while(i<m && j<n) {

        if(arr1[i] < arr2[j]) {
            i++;
        }
        else{
            // ek bar right shift kara do array1 ko
            int last = arr1[m-1];
            for(int k=m-1; k>=i; k--) {
                arr1[k] = arr1[k-1];
            }
            arr1[m] = last;
            m++;

            // arr1 ke ith place par arr2 ke jth value ko  dal do
            arr1[i++] = arr2[j++]; 
        }
    }
    //arr2 ka baki bache huwe ko copy kar do arr1 me
    if(i==m && arr1[i-1]<=arr2[j]){
        while(j!=n) {
            arr1[m] = arr2[j];
            m++;
            j++;
        } 
    }

    for(int i=0; i<m; i++) {
        cout << arr1[i] << " ";
    }
}

int main(){
int arr1[5] = {1,3,7,8,9};
int arr2[5] = {2,4,6,8,9};

merge(arr1,5,arr2,5);
return 0;
}