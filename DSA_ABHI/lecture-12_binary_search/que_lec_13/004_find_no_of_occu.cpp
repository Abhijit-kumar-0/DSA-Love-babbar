// find total number of occurences of an element in a sorted array
#include<iostream>
using namespace std;

int firstocc(int arr[], int size, int key);
int lastocc(int arr[], int size, int key);


int main()
{

    int arr[7] = {0,2,3,5,5,5,5};
    int first = firstocc(arr,7,5);
    int last = lastocc(arr,7,5);
    cout << "Total number of occurence is: " << (last - first) + 1;
}

int firstocc(int arr[], int size, int key)
{
    int start = 0;
    auto end = size;
    auto ans = -1;
    int mid = start + (end - start)/2;
    
    while(start <= end){
    if(arr[mid] == key)
    {
        end = mid - 1;
        ans = mid;
    }
    else if(arr[mid] > key)
    {
        end = mid - 1;
    }
    else if(arr[mid] < key)
    {
        start = mid + 1;
    }
    mid = start + (end - start)/2;
}
return ans;
};

int lastocc(int arr[], int size, int key)
{
    int start = 0;
    auto end = size;
    auto ans = -1;
    int mid = start + (end - start)/2;
    
    while(start <= end){
    if(arr[mid] == key)
    {
        start = mid + 1;
        ans = mid;
    }
    else if(arr[mid] > key)
    {
        end = mid - 1;
    }
    else if(arr[mid] < key)
    {
        start = mid + 1;
    }
    mid = start + (end - start);
}
return ans;
}