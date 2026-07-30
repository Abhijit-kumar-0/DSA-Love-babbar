// count total number of occurrence element given array is sorted form
#include<iostream>
using namespace std;

void occurrenceCount(int arr[], int n, int& key, int& count) {
    // basecase
    if(n == 0){
        return;
    }

    if(arr[0] == key) {
        count++;
    }

    occurrenceCount(arr+1, n-1, key, count);
}

int main(){
    int arr[10] = {0,3,3,5,6,6,6,6,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    int key;
    cin >> key;

    int count = 0;
    occurrenceCount(arr, size, key, count);
    cout << "number of occurrence is: " << count;
return 0;
}