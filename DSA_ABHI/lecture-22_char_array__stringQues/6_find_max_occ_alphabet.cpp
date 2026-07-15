#include<iostream>
#include<string>
using namespace std;

int main(){
string S = "testsraj   amolisir";
int store[26] = {0};
int n = S.size();

// to count the occ element of alphabets & stored (a->0, b->1,.....z->26)
for(int i=0; i<n; i++) {
    char ch = S[i];
    int idx = ch - 'a';
    store[idx]++;
}

// find out maximum element give array as a store
int big = -1;
int index = -1;
for(int i=0; i<26; i++) {
    if(big < store[i]) {
        big = store[i];
        index = i;
    }
        
}

char ch = 'a'+(index);
cout << "maximum occerence alphabets -> " << ch;

return 0;
}