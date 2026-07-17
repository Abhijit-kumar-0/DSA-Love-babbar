#include<iostream>
using namespace std;

int main() {
    
    int row;
    int col;
    cout << "Enter row & col size: " << endl;
    cin >> row >> col;

    int **arr = new int *[row];

    for(int i = 0; i<row; i++) {
        arr[i] = new int;
    }
    // take input
    for(int i = 0; i<row; i++) {
        for(int j = 0; j<col; j++){
            cin >> arr[i][j];

        }
    }
    // print ouput
    for(int i = 0; i<row; i++) {
        for(int j = 0; j<col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    // on second arr heap 
    for(int i=0; i<row; i++) {
        delete [] arr[i];
    }

    delete []arr;
    return 0;
}