#include<iostream>
#include<deque>
using namespace std;

int main(){
deque<int> d;
d.push_back(2);
d.push_front(1);
d.pop_front();
d.pop_back();
for(int i:d) {
    cout << i << " ";
}
deque<int> x = {2,3,4,5,6,7};
cout << "\nelement at 2nd idx -> " << x.at(2) << endl;
cout << "first -> " << x.front() << endl;
cout << "back -> " << x.back() << endl;
cout << "is empty -> " << x.empty() << endl;

cout << "before erase\n";
for(int i:x) {
    cout << i << " ";
}
x.erase(x.begin()+1,x.begin()+2);
cout << "\nafter erase\n";
for(int i:x) {
    cout << i << " ";
}
cout << "\nbefore clear size -> " << x.size() << endl;
x.clear();
cout << "\nafter clear size -> " <<x.size();
return 0;
}