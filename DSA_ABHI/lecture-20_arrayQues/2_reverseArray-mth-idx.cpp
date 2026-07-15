#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> reverse(vector<int> v, int m) {
    int s = m+1, e = v.size()-1;
    while(s<=e) {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v) {
    cout << "\nReverse :" << endl;
    for(int i:v) {
        cout << i << " ";
    }cout << endl; 
}

int main(){
vector<int> v;
v.push_back(20);
v.push_back(3);
v.push_back(2);
v.push_back(9);
v.push_back(5);
v.push_back(10);

int m;
// user give the number to reverse behind elemnet to end element
cout << "Enter idx to reverse:" << endl;
cin >> m;

vector<int> ans = reverse(v,m);
print(ans);

return 0;
}