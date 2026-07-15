#include<iostream>
#include<cmath>
using namespace std;

int colSum(int arr[][4], int row, int col) {

    int smallest = pow(2,31)-1;
    for(int col=0; col<4; col++) {
    int sum = 0;
    for(int row=0; row<3; row++) {
        sum += arr[row][col];    
    }
    cout << "column sum: " << sum << endl;

    // found smallest value
    if(sum < smallest) {
        smallest = sum;
    }
    
}
return smallest;
}


int main(){
int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

for(int row=0; row<3; row++) {
    for(int col=0; col<4; col++) {   
        cout << arr[row][col] << " ";
    }
    cout << endl;
}

// call to print sum in column element
int smallVal = colSum(arr, 3, 4);
cout << "\nSmallest value is: " << smallVal;
return 0;
}