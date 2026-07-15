#include<iostream>
using namespace std;

int main(){
int arr[3][3] = {1,2,3,4,5,6,7,8,9};
int i=0;
for(int col = 0; col<3; col++) {
    if(i==0) {
        while(i<3) {
            cout << arr[i][col] << " ";
            i++;
        }
        i--;
    }else {
        while(i>=0) {
            cout << arr[i][col] << " ";
            i--;
        }
        i++;
    }    
}
return 0;
}