#include<iostream>
#include<string>
using namespace std;

int main() {
string S = "";
string copy(S);

int s = 0; 
int e = S.size()-1;
int st = s, end = e;

// copy stirng ko reverse karo
while(st<=end) {
    swap(copy[st++],copy[end--]);
}

int m = 0 , n = 0;
char ch1,ch2;
for(int i=0; i<e; i++) { // jab i<=e dege toh S = " " not palindrome,i<e par palindrome hai
    
    while(m<e) {
        if(S[m]>='a' && S[m]<='z') {
            ch1 = S[m++];
            break;
        }else {
            m++;
        }
    }
    while(n<e) {
        if(copy[n]>='a' && copy[n]<='z') {
            ch2 = copy[n++];
            break;
        }else {
            n++;
        }
    }
    if(ch1!=ch2) {
        cout << "not a palindrome\n" ;
        return 0;
    }
}
cout << "it is a palindrome\n";
return 0;
}
// 3rd approach in first remove all unnecessary sign will remove & 
// check if(first++ != last-- ) return false