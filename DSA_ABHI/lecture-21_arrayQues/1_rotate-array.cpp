#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// worst case
vector<int> rotate(vector<int> v) {
    int n = v.size()-1;
    int last = v[n];
    for(int i=n; i>0; i--) {
        swap(v[i],v[i-1]);
    }
    v[0] = last;
    return v;
}

// best case 
void rotates(vector<int> v, int k) {
    vector<int> temp(v.size());

    int n = v.size();
    for(int i=0; i<n; i++) {
        temp[(i+k)%n] = v[i];   
    }
    v = temp;   
    for(int i:v) {
        cout << i << " ";
    }
}

int main(){
vector<int> v = {1,2,3,4,5,7,9};
int k;
cout << "enter k" << endl;
cin>> k;

// while(k!=0) {
//     v = rotate(v);
//     k--;
// }
// for(int i:v) {
// cout << i << " ";
// } cout << endl << endl;

// best case 
rotates(v,k);

return 0;
}