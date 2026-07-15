#include<iostream>
using namespace std;

int main(){
int n = 11;
int dig = 0;
while(n!=0){
    int bit = (n&1);
    n = n >> 1;
    
    dig = 10 * dig + bit;
}   
cout << dig; 
return 0;
}