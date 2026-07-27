#include<iostream>
using namespace std;

bool CheckSort(int arr[], int size) {
    
    if(size == 1) {
        return true;
    }
    if(arr[size-1] < arr[size-2]) {
        return false;
    }
    size--;
    // recursive relation
    CheckSort(arr, size);

}

int main() {

    int arr[6] = {2,4,6,9,11,13};

    int ans = CheckSort(arr, 6);
     
    cout << "ans: " << ans << endl;
    
    return 0;
}