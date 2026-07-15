#include<iostream>
using namespace std;

int main(){
int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
for(int row=0; row<4; row++) {
    for(int col=0; col<4; col++) {
        cout << arr[row][col] << " ";
    }
    cout << endl;
}
int n=4;
int srow=0;
int scol=0;
int erow=n-1;
int ecol=n-1;
int runtime =0;
while(runtime<n/2){

runtime++;
}

for(int row=0; row<4; row++) {
    for(int col=0; col<4; col++) {
        cout << arr[row][col] << " ";
    }
    cout << endl;
}
return 0;
}