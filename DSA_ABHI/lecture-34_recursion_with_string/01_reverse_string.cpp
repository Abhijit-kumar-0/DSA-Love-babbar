#include<iostream>
#include<string>
using namespace std;

string StrReverse(string s) {

    // basecase 
    if(s[0] == '\0') {
        return s;
    }

    string newstr = newstr + s[0];

    return StrReverse(s.erase(0,1));
}

int main(){
    string s = "babbar";
    // cout << StrReverse(s);
    string newstr = "b";
    
    while(s[0] !='\0') {
        cout << s[0] << " ";
        cout << s.erase(0,1) << endl;
        newstr = newstr+s[0];
    }
    cout << newstr;
return 0;
}