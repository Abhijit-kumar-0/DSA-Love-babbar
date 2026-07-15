#include<iostream>
#include<string>
using namespace std;

int RL(string str, int s, int e) {
    // traverse from end to begging 
    while(e>=s) {
        char ch = str[e];
        if(ch >= 'a' && ch <='z') {
            return e;
        }
        else if(ch>='0' && ch<='9') {
            return e;
        }
        else{
            e--;
        }
    }
}

int LR(string str, int s, int e) {
    // traverse from begging to end
    while(s<=e) {
        char ch = str[s];
        if(ch >= 'a' && ch <='z') {
            return s;
        }
        else if(ch>='0' && ch<='9') {
            return s;
        }
        else{
            s++;
        }
    }   
}

int main(){
    // return true when str = " "; given solve the error(false)
    string str = "a car is 1 sir ac a";

    int length = str.size();
    int s=0; 
    int e= length-1;

    // change all uppercase element into lowercase
    for(int i=0; i<length; i++) {
        char ch = str[i];
        if(ch>='A' && ch<='Z') {
            str[i] = ch - 'A' + 'a';
        }
    }
    
    // check condition palindrome or not
    while(s<=e) {
        
        // purify character & number from str
        s = LR(str,s,e);
        e = RL(str,s,e);

        if(str[s]!=str[e]) {
            cout << "false";
            return 0;
        }
        else {
            s++;
            e--;
        }
    }
    cout << "true";

return 0;
}