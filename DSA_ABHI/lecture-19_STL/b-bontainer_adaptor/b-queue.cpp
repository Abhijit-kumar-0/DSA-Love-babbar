#include<iostream>
#include<queue>
using namespace std;

int main(){
queue<string> q;
q.push("abhijit");
q.push("kumar");
q.push("singh");
cout << "front -> " << q.front() <<endl;
q.pop();
cout << "front -> " << q.front() <<endl;
cout << "back -> " << q.back() <<endl;
cout << "is empty -> " << q.empty();
return 0;
}