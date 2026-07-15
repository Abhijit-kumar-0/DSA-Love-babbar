#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void moveZero(vector<int> v) {
    int n= v.size()-1;
    int x = 0; 
    for(int i=n; i>=0; i--) {

        if(v[i] == 0) {
            for(int j=i; j<n-x; j++) {
                swap(v[j],v[j+1]);
            }
            // isliye lagaya taki har bar end tak swap na kre element ko
            x++;
        }
    }

    for(int i:v) {
        cout << i << " ";
    }
}

// ek dusra tarika
void movesZeroes(vector<int> v) {
    int nonzero = 0;
    for(int i=0; i<v.size(); i++) {
        if(v[i]!=0) {
            swap(v[nonzero++],v[i]);
        }
    }
    for(int i:v) {
        cout << i << " ";
    }

}

int main(){
vector<int> v = {0,2,9,6,6,6,0};

// moveZero(v);

// dusra tarika => non zeros ko left shift kara do.
movesZeroes(v);
return 0;
}