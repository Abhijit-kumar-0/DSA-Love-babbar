#include<iostream>

using namespace std;

void sort(int arr1[], int m, int arr2[], int n , int arr3[]) {

int i = 0, j = 0, k = 0;
while(i<m && j<n) {
    if(arr1[i]<arr2[j]) {
        arr3[k++] = arr1[i++];
    }
    else {
        arr3[k++] = arr2[j++];
    }
}
// first array ke baki element ko copy kar do
while(i<m) {
    arr3[k++] = arr1[i++];
}
// second array ke baki element ko copy kar do
while(j<m) {
    arr3[k++] = arr2[j++];
}

for(int i=0; i<8; i++) {
    cout << arr3[i] << " ";
}
}

int main(){

int arr1[5] = {0,2,3,5,9};
int arr2[3] = {0,2,3};
int arr3[8] = {0};

sort(arr1, 5, arr2, 3, arr3);
return 0;
}