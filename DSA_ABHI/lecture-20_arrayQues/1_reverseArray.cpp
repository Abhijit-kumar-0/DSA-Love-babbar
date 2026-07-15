#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> reverse(vector<int> v) {
    int s = 0, e = v.size()-1;
    while(s<=e) {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v) {
    cout << "\nPrinting reverse array:" << endl;
    for(int i:v) {
    cout << i << " ";
    }cout << endl;
}

int main(){
vector<int> v = {1,3,2,8,7,6,9};

vector<int> ans = reverse(v);

print(ans);

return 0;
}