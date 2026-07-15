#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sortArr(vector<int> v) {
    sort(v.begin(),v.end());
    return v; 
}

vector<int> counting(vector<int> v, vector<int> v1) {
    for(int i=0; i<v.size(); i++) {
    int j=i;
    int count = 0;
    while(v[i]==v[j]) {
        count++;
        j++;
    }
    i=j-1;
    v1.push_back(count);
}
return v1;
}

bool unique(vector<int> v) {
    int result = 0;
    for(int i=0; i<v.size(); i++) {
        result ^= v[i];
    }
}

int main(){
vector<int> v = {1,3,4,4,1,1};
vector<int> v1 = {};

v = sortArr(v);
// same element kitne hai count kar ke new vector me daldo
v1 = counting(v, v1);

int result = unique(v1);

if(result == 0)
    cout << "false";
else
    cout << "true";
return 0;
}