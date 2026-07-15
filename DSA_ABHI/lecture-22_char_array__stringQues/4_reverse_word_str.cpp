#include<iostream>
#include<string>
using namespace std;

int main(){
string S = "my name is abhijit";
int n = S.size();

for(int i=0; i<n; i++) {
    int s = i;
    while(S[i]!='\0') {
        if((int)S[i]==32) {
            break;
        }
        else {
            i++;
        }
    }

    int e = i-1;
    // swap karado jo s aur e ke bitch me word aatoa hoon
    while(s<=e) {
        swap(S[s++] , S[e--]);
    }
    }

    // to reverse the actual string
    int s=0, e=n-1;
    while(s<=e) {
        swap(S[s++] , S[e--]);
    }

for(auto i:S) {
    cout << i;
}
return 0;
}