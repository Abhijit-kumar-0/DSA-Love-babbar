#include<iostream>
using namespace std;

int main(){
int arr[9] = {1,2,3,4,3,2,4,8,1};
int n = 9;

for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
        if(i==j) {
            continue;
        }
        else if(arr[i] == arr[j]) {
            break;
        }
        else if(arr[i]!=arr[j] && j==(n-1)) {
            cout << "unique value is: " << arr[i] << endl;
            return 0;
        }
    }
}
return 0;
}