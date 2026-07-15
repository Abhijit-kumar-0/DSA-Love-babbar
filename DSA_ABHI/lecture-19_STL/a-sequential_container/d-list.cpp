#include<iostream>
#include<list>
using namespace std;

int main(){
list<int> l;
list<int> y(6,1);

l.push_back(2);
l.push_front(1);
for(int i:l) {
    cout << i << " ";
}
l.pop_back(); 
l.pop_front();
cout << "\nis empty -> " << l.empty() << endl;

list<int> x = {1,2,3,4,5,6,7};
cout << "size -> " << x.size() << endl;;
cout << "front -> " << x.front() << endl;;
cout << "back -> " << x.back() << endl;
cout << "before erase" << endl;
for(int i:x) {
    cout << i << " ";
}

x.erase(x.begin());

cout << "\nafter erase" << endl;
for(int i:x) {
    cout << i << " ";
}
x.clear();

return 0;
}