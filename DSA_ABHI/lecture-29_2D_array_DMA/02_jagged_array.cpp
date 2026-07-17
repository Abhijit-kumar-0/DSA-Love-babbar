#include<iostream>
using namespace std;

int main() {
    int row = 3;
    int colsize[3] = {3,2,4};
    int **arr = new int*[row];
    
    arr[0] = new int[colsize[0]] {1,2,3};
    arr[1] = new int[colsize[1]] {4,5};
    arr[2] = new int[colsize[2]] {6,7,8,9};

    for(int i = 0; i<row; i++) {
        for(int j=0; j<colsize[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return (0);
}