#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int check(vector<int> v) {
    int pair = 0;
    int n = v.size();
    for(int i=0; i<n-1; i++) {
        if(v[i]>v[i+1]){
            pair++;
        }
    }
    if(v[0]>v[n-1]) {
    pair++;
    }
    return pair <= 1;

}

int main(){
vector<int> v = {2,2,2,2,2,2};
cout << check(v);
return 0;
}