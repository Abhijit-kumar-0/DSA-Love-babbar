#include<iostream>
using namespace std;

int isfound(int arr[][4], int row, int col, int target) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(arr[i][j]==target) {
                return 1;
            }
        }
    }
    return 0;
}

int main(){
int arr[3][4] = {1,3,7,19,92,2,21,5,16,9,21,73};
int target;
cout << "Enter target: ";
cin >> target;

int result = isfound(arr,3,4,target);
if(result) {
    cout << "success";
}
else {
    cout << "failed";
}
return 0;
}