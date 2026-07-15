// print the 1st compliment of binary number.
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the number\n";
    cin >> n;
    int i=0,ans=0;
    int bit;
    while(n!=0){
        bit = (n&1);
        cout << bit;
        ans = (bit*(pow(10,i))) + (ans);
        cout<<" <"<< ans <<"> ";
        n=n >> 1;
        i=i+1;
    }
    cout<<"\n"<< ans;
}   