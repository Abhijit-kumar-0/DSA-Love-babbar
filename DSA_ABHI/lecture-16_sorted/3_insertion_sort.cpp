#include<iostream>
using namespace std;

int main(){
int arr[7] = {10,1,7,4,8,2,11};
int n = sizeof(arr)/sizeof(arr[0]);

for(int i=1; i<n; i++) {
    int temp = arr[i];
    int j=i-1;
    for(; j>=0; j--) {
        if(temp < arr[j]) {
            // shift
            arr[j+1] = arr[j];
        }
        else {
            break;
        }
    }
    arr[j+1] = temp;
}

// // Method 2
// for(int i = 1; i<n; i++) {
//     for(int j=i; j>0; j--) {
//         int temp = A[j];
//         if(A[j] < A[j-1]) {

//             A[j] = A[j-1];
//             A[j-1] = temp;
//         }
//         else {
//             break;
//         }
//     }
// }

for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
}
return 0;
}