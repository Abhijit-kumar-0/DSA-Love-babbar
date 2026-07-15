#include<iostream>
using namespace std;
int main(){
    int n,ans =1;
    cout << ("Enter the number:\n");
    cin >> n;
    for(int i=0; i<=30; i++){
        if(ans==n){
            cout << "true";
        }
        ans = ans *2;
    }
    return 0; //    cout << "false";
}