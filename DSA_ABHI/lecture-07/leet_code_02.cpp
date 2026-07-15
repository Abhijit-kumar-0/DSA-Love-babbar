#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the integer number\n";
    cin>>n;
    int m=n;
    int mask=0;
// edge case./exceptional'  
    if(n==0)
    cout << 1;
    else if(n!=0){
    while(m!=0) {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    cout << ans;
    }
}