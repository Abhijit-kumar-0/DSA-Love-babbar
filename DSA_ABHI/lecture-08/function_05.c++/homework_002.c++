// i/p -> two number a & b.
// o/p -> total number of bits
// 4-> 100 , 5-> 101 --> total: 3 (three 1,1,1)'s
// 6-> 110 , 9-> 1001 -> total: 4 (four 1,1,1,1)'s
#include<iostream>
using namespace std;

int bit(int x){
    int i, ans = 0;
    for(i = 1; x!=0; i++){
        int bit = (x&1);
        ans = ans + bit;
        x = x >> 1;
    }
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter number a and b"<<endl;
    cin>> a >> b;
    int result = bit(a)+bit(b);
    cout << result;
    return 0;
}