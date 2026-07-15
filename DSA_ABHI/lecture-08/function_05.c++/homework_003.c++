// i/p = n
// o/p = nth term of fibonacci series.(0,1,1,2,3,5,8,13,21,34....)
// i.e -> n=5 , o/p -> 3
// i.e -> n=9 , o/p -> 21
#include<iostream>
using namespace std;

int fibo(int x){
    int a=0,b=0,c=1;
    if(x==0)
    return 0;
    else if(x==1)
    return 1;
    else
    for(int i = 3; i<=x; i++){
        a = b + c;
        b=c;
        c=a;
    }
    return a;
}
int main(){
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    cout << fibo(n);
    return 0;
}