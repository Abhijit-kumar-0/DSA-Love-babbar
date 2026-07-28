// #include<iostream>
// using namespace std;

// bool CheckSort(int arr[], int size) {
    
//     if(size == 1) {
//         return true;
//     }
//     if(arr[size-1] < arr[size-2]) {
//         return false;
//     }
//     size--;
//     // recursive relation
//     CheckSort(arr, size);

// }

// int main() {

//     int arr[6] = {2,4,6,9,11,13};

//     int ans = CheckSort(arr, 6);
     
//     cout << "ans: " << ans << endl;
    
//     return 0;
// }

// method 2

#include<iostream>
using namespace std;

    bool CheckSort(int arr[], int n) {

        // basecase
        if(n == 0 || n == 1) {
            return true;
        }

        if(arr[0] > arr[1]) {
            return false;
        }
        else {
            int checksort = CheckSort(arr + 1, n - 1);
            return checksort;
        }

    }
int main() {

    int arr[6] = {2,4,6,9,10,13};
    int ans = CheckSort(arr, 6);

    if(ans) {
        cout << "array is short " << endl;
    }
    else {
        cout << "array is not short" << endl;
    }
    return 0;
}