/*You have been given a sorted array/list ARR consisting of 'N' elements. You are also given on integer 'k'. now the array is rotated at some pivot point unknown to you. for ex, if ARR = [1,3,5,7,8]. Then after rotating ARR at index 3. the array will be ARR = [7,8,1,3,5]. Now your task is to find the index at which 'k' is present in ARR. 
NOTE -> 
[1]. if 'k' is not prensent in ARR then print -1.
[2]. There are no duplicate elemenst priesetn in ARR 
[3]. ARR can be rotated only in the right direction.
for ex - if ARR = [12,15,18,2,4] and k = 2. then the position at which K is present in the array is 3(o-indexed)*/

#include <iostream>
using namespace std;

int findPosition(int arr[], int n, int k);
int getpivot(int arr[], int n);
int binarySearch(int arr[], int pivot, int n, int k);

int main()
{
    int arr[5] = {7, 8, 1, 3, 5};
    // cout << "pivot is " << getpivot(arr, 5) << endl;
    
    // TO find out index to user want
    int k;
    cout << "Enter number" << endl;
    cin >> k;
    int index = findPosition(arr, 5, k);
    cout << "Inde is " << index << endl; // Print the result
    
}
// find pivot
int getpivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

//find position on 1st or 2nd line
int findPosition(int arr[], int n, int k){
    int pivot = getpivot(arr, n);
    
    if(k >= arr[pivot] && k <= arr[n-1])
    {// Search in the right part
        return binarySearch(arr, pivot, n-1, k);
    }
    else
    {// Search in the left part
        return binarySearch(arr, pivot, -1, k);
    }
}

// binary search
int binarySearch(int arr[], int start, int end, int k){
    int s = start;
    int e = end - 1;
    int mid = s + (e - s)/2;
    while(s<=e)
    {
    if(arr[mid] == k)
    {
        return mid;
    }
    else if(arr[mid] > k)
    {
        e = mid - 1;
    }
    else if(arr[mid] < k)
    {
        s = mid + 1;
    }
    mid = s + (e - s)/2;
    }
    return -1; // if not found
}