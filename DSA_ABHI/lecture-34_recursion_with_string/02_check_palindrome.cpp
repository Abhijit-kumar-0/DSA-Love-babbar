#include<iostream>
#include<string>
using namespace std;
bool CheckPalindrome(string& s, int start) {
    // base case
    if(start>(s.size()-1)-start) {
        return true;
    }
    if(s[start]!=s[(s.size()-1)-start]) {
        return false;
    }else {
        start++;
        CheckPalindrome(s,start);
    }

}



int main() {
    string s = "aba";
    int start = 0;
    int ans = CheckPalindrome(s,start);
    if(ans) 
        cout << "Given string is a palindrome";
    else    
        cout << "Given string is not palindrome";
    
    return 0;
}