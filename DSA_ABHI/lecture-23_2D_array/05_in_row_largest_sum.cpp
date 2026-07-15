#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int largest = INT8_MIN;
    int row = -1;
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    for(int i=0; i<3; i++) {
        int sum = 0;
        for(int j=0; j<3; j++) {
            sum += arr[i][j];
        }
        if(largest < sum) {
            largest = sum;
            row = i;
        }
    }   
    cout << "largest = " << largest << endl;
    cout << "Row = " << row;
    return 0;
}