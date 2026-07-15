#include<iostream>
using namespace std;

int main(){
int arr[8] = {2,5,1,6,9,9,1,3};
int e = sizeof(arr)/sizeof(arr[0])-1;
int s = 0;
int mid = s+(e-s)/2;
int L_l = mid-s+1;
int L_r = e-mid;
int *first = new int[L_l];
int *second = new int[L_r];

int m = 0;
int n = mid+1;
int i = 0;
while(m<L_l) {
    first[i++] = arr[m++];
}

int k = 0;
while(k<L_r) {
    second[k++] = arr[m++];
}

for(int i=0; i<m-4; i++) {
    cout << first[i] << " ";
}cout << "\nsecond\n";
for(int i=0; i<k; i++) {
    cout << second[i] << " ";
}

int arr1[8] = {};
int x = 0;
int y = 0;

for(int i = 0; i<e+1; i++) {
    if(x<L_l) {
        arr1[i] = first[x++];
    }
    else if(y<L_r) {
        arr1[i] = second[y++];
    }
}
cout << "\n";
for(int i =0; i<e+1; i++) {
    cout << arr1[i] << " ";
    // cout << *(first+i) << " ";
    // cout << first[i] << " ";
}
return 0;
}