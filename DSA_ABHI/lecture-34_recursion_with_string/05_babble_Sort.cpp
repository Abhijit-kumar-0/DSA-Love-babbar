#include<iostream>
using namespace std;

void babbleSort(int arr[], int n) {
    // base case;
    if(n == 0 || n == 1) {
        return;
    }

    for(auto i = 0; i<5; i++) {
        cout << arr[i] << " ";
    }cout << endl;

    // largest element ko last me rakh de 
    for(int i = 0; i<n-1; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }

    }
    // recursive relation
    babbleSort(arr, n-1);

}

int main() {

    int arr[5] = {2,5,1,6,0};

    int size = sizeof(arr)/sizeof(arr[0]);

    babbleSort(arr,size);

    for(auto i = 0; i<size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}