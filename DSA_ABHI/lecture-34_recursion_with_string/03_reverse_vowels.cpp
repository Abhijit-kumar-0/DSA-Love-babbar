#include<iostream>
#include<string>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {

    string s = "apples";
    int l = 0;
    int r = s.size()-1;

    while(l<r) {

        if(isVowel(s[l])  && isVowel(s[r])) {
            // cout << "l ->" << l << " & r ->" << r << endl;
            // cout << s[l] << " swap " << s[r] << endl;
            swap(s[l],s[r]);
            l++;
            r--;
            // cout << s << endl;
        }
        if(!isVowel(s[l])) {
            // cout << "left -> " << s[l] << endl;
            l++;
        }
        if(!isVowel(s[r])) {
            // cout << "right -> " << s[r] << endl;
            r--;
        }

    }
    for(auto i : s) {
        cout << i << " ";
    }

    return 0;
}