#include<iostream>
using namespace std;

int partition(int* arr, int s, int e) {
    int pivotIdx = s;
    int min = arr[s];

    for(int i = s; i<e; i++) {
        if(arr[i] < min) {
            pivotIdx++;
        }
    }


    // place the right position of the given pivot
    swap(arr[s], arr[pivotIdx]);

    // less then or greater then pivot element shift 
    int i = s;
    int j = e-1;
    int pivot = arr[pivotIdx];
    while(pivotIdx > i && pivotIdx < j) {
        while(arr[i] <= pivot) {
            i++;
        }
        while(arr[j] >= pivot) {
            j--;
        }

        if(arr[i] > pivot && arr[j] < pivot) {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIdx;
}

void quicksort(int* arr, int s, int e) {

    int p = partition(arr, s, e);

    if(s >= e) {
        return;
    }


    // left part
    quicksort(arr, s, p);

    // right part
    quicksort(arr, ++p, e);
}

int main(){

    int arr[7] = {10,80,30,90,40,50,0};
    int size = sizeof(arr)/ sizeof(arr[0]);

    quicksort(arr, 0, size);
    
    cout << "final result: " << endl;
    for(int i = 0; i<size; i++) {
        cout << arr[i] << " ";

    }
return 0;
}