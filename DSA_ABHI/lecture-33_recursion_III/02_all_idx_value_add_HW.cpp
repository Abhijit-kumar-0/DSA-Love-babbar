// #include <iostream>
// using namespace std;

// int SumArr(int arr[], int n) {
//     // basecase
//     if(n==0 || n==1) {
//         return arr[0];
//     }

//     //process
//     arr[1] += arr[0];

//     //RR
//     int result = SumArr(arr+1, n-1);
//     return result;
// }

// int main() {
//     int arr[] = {3,2,5,1,6};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     cout << SumArr(arr, n);
//     return 0;
// }


#include <iostream>
using namespace std;

int SumArr(int arr[], int n) {
    // basecase
    if(n==0) {
        return 0;
    }
    if(n == 1) {
        return arr[0];
    }
    int RemainingPart = SumArr(arr+1, n-1);
    int sum = arr[0] + RemainingPart;
    return sum;
}

int main() {
    int arr[] = {3,2,5,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int sum = SumArr(arr, n);
    cout << "Sum " << sum;
    return 0;
}
