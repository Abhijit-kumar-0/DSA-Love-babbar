#include<iostream>
#include<map>
using namespace std;

int main(){
map<int,string> m;

m[3] = "kumar";
m[8] = "singh";
m[1] = "abhijit";
m.insert({10,"ms"});

cout << "\nbefore erase" << endl;
for(auto i:m) {
    cout << i.first << " " << i.second << endl;
}

m.erase(10);

cout << "\nafter erase" << endl;
for(auto i:m) {
    cout << i.first << " " << i.second << endl;
}

cout << "size -> " << m.size() << endl;
cout << "is empty -> " << m.empty() << endl;

auto it = m.find(3);
for(auto i = it; i!=m.end(); i++) {
    cout << (*i).first << " " << (*i).second<< endl;
}
return 0;
}