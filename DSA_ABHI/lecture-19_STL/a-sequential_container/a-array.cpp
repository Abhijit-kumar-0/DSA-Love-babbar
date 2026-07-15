#include<iostream>
#include<array>
using namespace std;

int main(){
array<int,4> a = {1,2,3,4};
int size = a.size();

for(int i = 0; i<size; i++) {
    cout << a[i] << " ";
    cout << a.at(i) << " ";
}
cout << endl <<"first element -> " << a.front() << endl;
cout << "back element -> " << a.back() << endl;
cout << "array is empty or not ->" << a.empty();
// cout << "how many elements present in array -> " << a.capacity();  not allowed in array
return 0;
}