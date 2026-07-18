#include<iostream>
using namespace std;

void Show(int arr[], int size, int start = 0) {
    for(int i=start; i<size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    int arr[4] = {3,4,5,6};
    int start = 2;
    int size = 4;
    Show(arr,size,start);
    return 0;
}