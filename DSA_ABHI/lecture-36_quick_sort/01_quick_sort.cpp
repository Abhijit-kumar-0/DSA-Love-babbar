#include<iostream>
using namespace std;

int partition(int* arr, int s, int e) {

    int p = s;
    int min = arr[s];

    for(int i = s; i<e; i++) {
        if(arr[i] < min) {
            min = arr[i];
            p++;
        }
    }

}

void quicksort(int* arr, int s, int e) {

    if(s >= e) {
        return;
    }

    int p = partition(arr, s, e);
        swap(arr[s], arr[p]);

    for(int i = s; i<e; i++) {
        cout << arr[i] << " ";
    }cout << endl;

    // left part
    quicksort(arr, s, p-1);

    // right part
    quicksort(arr, p+1, e);
}

int main(){

    int arr[7] = {0,9,2,4,6,-1,-4};
    int size = sizeof(arr)/ sizeof(arr[0]);

    quicksort(arr, 0, size);

    for(int i = 0; i<size; i++) {
        cout << arr[i] << " ";

    }
return 0;
}