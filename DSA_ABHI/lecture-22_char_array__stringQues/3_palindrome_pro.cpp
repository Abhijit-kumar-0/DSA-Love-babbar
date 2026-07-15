// // string is senstive 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
// vector<char> str = {'a','b','c','b','m'};

// vector<char> reverse = str;

// int e = str.size()-1;
// int s = 0;
// int ans = 1;
// while(s<=e) {
//     if(str[s]!=str[e]){
//         cout << "ans -> " << 0;
//         return  ans = 0;
//     }
//     else{
//         s++;
//         e--;
//     }
// }
// cout << "ans -> " << ans;

// return 0;
// }


// s is not case senstive
#include<iostream>
using namespace std;

int checkPalindrom(char s1[], int size) {
    int ans = 0;
    int st = 0;
    int e = size-1;
    while(st<=e) {

        if(s1[st]!=s1[e]) {
            return ans;
        }
        else{
            st++;
            e--;
        }
    }
    return ans=1; 
}

char tolowerCase(char ch) {
    if(ch>='a' && ch<='z') {
        return ch;
    }
    else {
        return ch - 'A' + 'a';
    }
}


int main() {
    char S[5] = {'3','B','d','B','1'};

    // convert to lower case
    for(int i=0; S[i]!='\0'; i++) {
           S[i] = tolowerCase(S[i]);
    //     S[i] = (char)tolower(S[i]);
    }


    cout << "string is pelindrom or not -> " << checkPalindrom(S,5);

    // for(auto i:s) {
    //     cout << i;
    // }
    // check(s,6);

    return 0;
}