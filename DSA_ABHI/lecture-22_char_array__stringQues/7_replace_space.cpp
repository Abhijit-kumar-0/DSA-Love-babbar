#include<iostream>
#include<string>
using namespace std;

int main(){
string S = "my name is abhijit";
string newstr;
int i = 0, j=0;

while(S[i]!='\0') {
    if(S[i]== ' ') {
        newstr.push_back('@');
        newstr.push_back('4');
        newstr.push_back('0');
    }else {
        newstr.push_back(S[i]);
    }
    i++;
}
cout << newstr;
return 0;
}