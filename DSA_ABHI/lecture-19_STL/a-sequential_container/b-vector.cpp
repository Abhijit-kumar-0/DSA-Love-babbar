#include<iostream>
#include<vector>
using namespace std;

int main(){
// empty vector
vector<int> a;

vector<int> v = {1,2,3,4};
cout <<"how many space occupy vector in memory -> "<< v.capacity() << endl;
v.push_back(5);

cout << "capacity -> " << v.capacity() << endl;
cout << "size -> " << v.size() << endl;
cout << "element at idx 4 is ->" << v.at(4) << endl;
cout << "front  -> " << v.front() << endl;
cout << "back -> " << v.back() << endl;
cout << "before pop operation" << endl;
for(int i:v) {
    cout << i << " ";
}
v.pop_back();
cout << "\nafter pop operation" << endl;
for(int i:v) {
    cout << i << " ";
}
cout << endl;
v.erase(v.begin()+1,v.begin()+3);

for(int i:v) {
    cout << i << " ";
}
v.clear();
cout << "is empty -> " << v.empty();

return 0;
}