#include<iostream>
using namespace std;

int BinarySearch(int arr[], int s, int e, int key) {
    int mid = s + (e-s)/2;

    // base case
    if(s>e) {
        return -1;
    }

    if(arr[mid] == key) {
        return mid;
    }
    
    // recursive relation
    if(arr[mid] < key) {
        return BinarySearch(arr, mid+1, e, key);
    }
    else {
        return BinarySearch(arr, s, mid-1, key);
    }
}

int main() {

    int arr[5] = {-1,0,4,5,7};
    int key;
    cin >> key;
    int s = 0;
    int e = sizeof(arr)/sizeof(arr[0]) - 1;
    int ans = BinarySearch(arr, s, e, key);

    if(ans == -1) {
        cout << "not present" << endl;
    } 
    else {
        cout << key << " is present at idx: " << ans << endl;    
    }
    return 0;
}