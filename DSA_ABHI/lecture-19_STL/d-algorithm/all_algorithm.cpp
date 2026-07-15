#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
vector<int> v;
v.push_back(2);
v.push_back(3);
v.push_back(5);
v.push_back(8);
v.push_back(0);
v.push_back(9);
v.push_back(3);

cout << "before sort" << endl;
for(auto i:v) {
    cout << i << " ";
}
// sort
sort(v.begin(),v.end());

cout << "\nafter sort" << endl;
for(auto i:v) {
    cout << i << " ";
}
// binary search
cout << "\n2 is present or not -> " << binary_search(v.begin(), v.end(), 2) << endl;

// reverse
char name = "abhijit";
// cout << "\n reverse name -> " << reverse(name.begin(), name.end()) << endl;

// max and min
int a = 20; 
int b = 30;
cout << "\nMax(20,30) -> " << max(a,b) << endl;
cout << "Min(20,30) -> " << min(a,b) << endl;

cout << "before swap a = " << a << " and b = " << b << endl;
// swap
swap(a,b);
cout << "after swap a = " << a << " and b = " << b << endl;
return 0;
}