#include<iostream>
#include<cmath> 
using namespace std;

int rowSum(int arr[][4], int i, int j){
int larger = pow(-2,31);
for(int i=0; i<3; i++) {
    int sum = 0;
    for(int j=0; j<4; j++) {
        sum += arr[i][j];
    }
    cout << "sum of 1st row: " << sum << endl;
    // check larger sum 

    if(sum > larger) {
        larger = sum; 
    }
}
    return larger;
}

int main(){
int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

for(int row=0; row<3; row++) {
    for(int col=0; col<4; col++) {
        cout << arr[row][col] << " ";
    }
    cout << endl;
}

// call to print all rows sums
int largeVal = rowSum(arr, 3, 4);
cout << "\nlargest value is: " << largeVal;
return 0;
}