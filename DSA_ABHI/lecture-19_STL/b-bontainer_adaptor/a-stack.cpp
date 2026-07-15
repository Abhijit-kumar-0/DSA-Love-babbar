#include<iostream>
#include<stack>
using namespace std;

int main(){
stack<string> s;
// s.push(3);
s.push("abhi");
s.push("kumar");
s.push("singh");

cout << s.top() << endl;
s.pop();
cout << s.top() << endl;

cout << "is empty -> " << s.empty() << endl;
cout << "size -> " << s.size();
return 0;
}