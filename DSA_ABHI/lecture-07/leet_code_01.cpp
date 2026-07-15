// reverse integer print
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int num, digit, ans=0;
    cout << "Enter the integer!\n";
    cin >> num; 

    if(num>INT8_MAX/10 || num<INT8_MIN/10){
    while(num!=0) {
        digit = num%10;
        num = num/10;
        // cout << num << ","<< digit << "\n";
        ans = (ans*10) + digit;
    
    }
        cout << ans << "\n";
    }else{
        cout<< num;
    }
}