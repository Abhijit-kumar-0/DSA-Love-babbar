#include<iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i =1; i<=n; n--){
        ans = ans*n;
    }
    return ans;
}
int nCr(int n, int r){ 
       
    int numi = fact(n);
    int deno = fact(r) * fact(n-r);
    return numi/deno;

}   
int main(){
    int n,r;
    cout<<"Enter n and r value"<<endl;
    cin >> n >>r;
    cout << "Answer = " <<nCr(n,r);
}