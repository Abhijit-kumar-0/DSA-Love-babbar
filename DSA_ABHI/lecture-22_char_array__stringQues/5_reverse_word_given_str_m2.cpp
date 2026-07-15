#include<iostream>
#include<string>
using namespace std;

string reverseString(string S) {
    int n = S.size()-1;
    int s = 0;
    while(s<n) {
        swap(S[s++], S[n--]);
    }
    return S;
}

int main(){
string S = "my name is abhijit kumar singh";
int e = S.size();

cout << S << endl;

int first = 0;
for(int i=0; i<=e; i++) {

    if(S[i]=='\0' || S[i]==' ') {
        // swap karado jo
        int end = i-1;
        while(first<end) {
            swap(S[first++] , S[end--]);
        }
        first = i+1;
    }
}

    cout << reverseString(S);
return 0;
}