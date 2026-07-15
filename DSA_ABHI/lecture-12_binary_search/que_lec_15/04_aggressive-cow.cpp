#include<iostream>
using namespace std;

void sort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
    for(int j=i+1; j<n; j++) {
        if(arr[i] > arr[j]) {
            swap(arr[i], arr[j]);
        }
    }
}
};

bool isPossible(int arr[], int mid) {
    
}

int main(){
int arr[5] = {4,2,1,3,6};
int n = sizeof(arr) / sizeof(arr[0]);

sort(arr,n);
int min = 0; 
int maxi = arr[n] - arr[0];
int mid = min + (maxi - min)/2;

while(min < maxi) {
    if(isPossible(arr,mid)) {
        min = mid + 1;
    }
    else {
        maxi = mid - 1;
    }
    mid = min + (maxi - min);
}
return 0;
}