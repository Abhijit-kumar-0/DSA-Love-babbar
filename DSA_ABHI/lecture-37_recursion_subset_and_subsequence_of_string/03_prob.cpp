#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isSubsequence(string s, string t) {
    int i = 0;
    int j = 0;

    while (i < s.length() && j < t.length()) {
        if (s[i] == t[j]) {
            i++;
        }
        j++;
    }
    cout << s.length() << endl;
    return i == s.length();        
}

int main() {

    string t = "";
    string s = "";

    // bool ans;
    bool ans = isSubsequence(s,t);   
    cout << ans << endl;
    
    if(ans) {
        cout << "subsequence hai" << endl;
    }
    else{
        cout << "subsequence nahi hai" << endl;
    }
    return 0;
}