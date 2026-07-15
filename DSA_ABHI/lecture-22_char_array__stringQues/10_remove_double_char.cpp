#include<iostream>
using namespace std;

int main(){
string s = "azxxzy";
int i = 1;

while(s[i]!='\0') {
    if(s[i-1]==s[i]) {
        s.erase(i-1, 2);  // why 2 b'coz we erase double char
        i=0;
    }
    i++;
}
cout << s;
// cout << s.length();
return 0;
}