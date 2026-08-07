#include<iostream>
using namespace std;

void inversionCount(int* arr, int& count, int size, int end) {
   
    // base case
    if(size == 0 || size == 1)  {
        return;
    }
    
    int s = (end - size)+1;
    for(int i{s}; i<end; i++) {
        if(arr[s] > arr[i+1]) {
            count++;
        }
    }

    inversionCount(arr, count, size-1, end);

}

int main(){
    int arr[4] = {4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    int count = 0;
    inversionCount(arr, count, size, size-1);
    cout << "Total inversion count: " << count << endl;

    return 0;
}