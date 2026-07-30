#include<iostream>
#include<math.h>
using namespace std;

int peakEle(int arr[], int size, int n) {
    //basecase
    if(size == 0) {
        return -1;
    }
    if(size == 1) {
        return n-size;
    }
    if(arr[0] > arr[1]) {
        return n-size;
    }

    peakEle(arr+1, size-1, n);

}

int main() {

    int arr[4] = {0,2,6,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = peakEle(arr,size,size);

    cout << endl << "peak value present at idx: " << ans << endl;
        
    return 0;
}