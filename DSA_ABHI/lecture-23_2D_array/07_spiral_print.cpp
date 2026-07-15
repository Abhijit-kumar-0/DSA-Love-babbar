// #include<iostream>
// using namespace std;

// int main(){
// int arr[3][3] = {1,2,3,4,5,6,7,8,9};
// int row = 0;
// int col = 0;
// int n = 3;
// for(int r=0; r<=n/2; r++) {
//     // increment col 
//     for(col; col<n; col++) {
//         cout << arr[row][col];
//     }
//     col--;
//     row++;
//     // increment row
//     for(row; row<n; row++) {
//         cout << arr[row][col];
//     }
//     col--;
//     row--;
//     // decrement col
//     for(col; col>=0; col--) {
//         cout << arr[row][col];
//     }
//     col++;
//     row--;
//     // decrement row
//     for(row; row>=0; row--) {
//         cout << arr[row][col];
//     }
//     row++;
//     cout << endl << col << row << endl;
// }
// return 0;
// }


#include<iostream>
using namespace std;

int main(){
int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

int col = sizeof(arr[0])/sizeof(arr[0][0]);
int row = sizeof(arr)/sizeof(arr[0]);

int matrix = col*row;
int count = 0;

// initialize index
int endingrow = row-1;
int endingcol = col-1;
int startingcol = 0;
int startingrow = 0;


while(matrix > count) {

    // increment col 
    for(int index = startingcol; matrix > count && index<=endingcol; index++) {
        cout << arr[startingrow][index]<<",";
        count++;
    }startingrow++; // 1
    
    // increment row
    for(int index = startingrow; matrix > count && index<=endingrow; index++) {
        cout << arr[index][endingcol]<<",";
        count++;
    }endingcol--; // 2

    // decrement col
    for(int index = endingcol; matrix > count && startingcol<=index; index--) {
        cout << arr[endingrow][index]<<",";
        count++;
    }endingrow--; // 2
    
    // decrement row
    for(int index = endingrow; matrix > count && startingrow<=index; index--) {
        cout << arr[index][startingcol]<<",";
        count++;
    }startingcol++; // 1

}
return 0;
}