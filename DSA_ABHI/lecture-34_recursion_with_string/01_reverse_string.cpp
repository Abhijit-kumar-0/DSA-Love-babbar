#include<iostream>
#include<string>
using namespace std;

void StrReverse(string& s,int start, int end) {
    
    // basecase 
    if(start>end) {
        return;
    }

    swap(s[start], s[end]);

    StrReverse(s,++start, --end);
}

int main(){
    string s = "babbar";
    
    int end = s.size()-1;
    int start = 0;

    StrReverse(s,start,end);
    cout << s << endl;

return 0;
}