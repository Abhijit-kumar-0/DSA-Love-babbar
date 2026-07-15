#include<iostream>
#include<set>
using namespace std;

int main(){
set<int> s;

s.insert(3);
s.insert(3);
s.insert(4);
s.insert(2);
s.insert(1);

for(auto i:s) {
    cout << i << " ";
}cout << endl;

cout << "3 is present or not -> " << s.count(3) << endl;
cout << "size -> " << s.size() << endl;
cout << "is empty -> " << s.empty() << endl;
cout << "iterator use to erase/delete element" << endl;
set<int>::iterator iter = s.begin();
iter++;
s.erase(iter);
cout << "after erase" << endl;
for(auto i:s) {
    cout << i << " ";
}cout << "\nto extract the element from 2nd place to end" << endl;

set<int>::iterator it = s.find(3);
for(auto itr = it; it!=s.end(); it++) {
    cout << *it << " ";
}cout << endl;

set<int> z = {2,3,3,5,5,5};
for(int i:z) {
    cout << i << " ";
}cout << endl;

set<string> x;
x.insert("abhijit");
x.insert("kumar");

for(auto i:x) {
    cout << i << " ";
}cout << endl;


return 0;
}