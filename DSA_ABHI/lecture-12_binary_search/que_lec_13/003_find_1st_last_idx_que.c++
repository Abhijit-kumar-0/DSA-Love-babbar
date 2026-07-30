// first and Last of an element in sorted array.
//you have been given a sorted array consisting of elements. you are also given a integer k .
// your task is to find the first and last occurrence of "k" in array. using binary search
#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key);
int lastOcc(int arr[], int size, int key);

int main(){
int even[8] = {3,3,3,6,7,9,12,15};

cout << "First occurrence to Index is: " << firstOcc(even,8,3) << endl;
cout << "last occurrence to Index is: " << lastOcc(even, 8,3) << endl;
}

// find first occurrence
int firstOcc(int arr[], int size, int key){
int start = 0;
int end = size-1;
int ans = -1;

int mid = start + (end - start)/2; 

while(start <= end){

if(arr[mid]==key){
    ans = mid;
    end = mid-1;    // To check before element have same key or not
}
else if(key < arr[mid]){ // left me jao
    end = mid - 1 ;
}
else if(key > arr[mid]){ // right me jao
    start = mid +1;
}

mid = start + (end - start)/2;
}
return ans;
}

// finding last occurrence
int lastOcc(int arr[], int size, int key){
int start = 0;
int end = size-1;
int ans = -1;

int mid = start + (end - start)/2; 

while(start <= end){

if(arr[mid]==key){
    ans = mid;
    start = mid + 1;    //  
}
else if(key < arr[mid]){
    end = mid - 1 ;
}
else if(key > arr[mid]){
    start = mid +1;
}

mid = start + (end - start)/2;
}
return ans;
}