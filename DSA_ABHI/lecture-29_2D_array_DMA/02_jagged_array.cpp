#include<iostream>
using namespace std;

int main() {
    int row = 3;
    int colsize[4] = {1,2,3,4};
    int **arr = new int*[row];
    
    arr[0] = new int[3] {1,2,3};
    arr[1] = new int[2] {4,5};
    arr[2] = new int[4] {6,7,8,9};

    for(int i = 0; i<row; i++)
        for(int j=0; j<colsize[i]; j++)
            
    return (0);
}