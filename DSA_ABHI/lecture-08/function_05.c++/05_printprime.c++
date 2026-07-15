#include<iostream>
using namespace std;

// 1-> prime
// 0-> not prime
bool printprimt(int n){
   for(int i =2; i<n; i++){
    if(n%i==0)
        return 0;
   }
   return 1;
}
int main(){
    int num;
    cout << "Enter number" << endl;
    cin >> num;
     
    if(printprimt(num))
        cout << " is a prime no." << endl;
    else
        cout << "is not a prime no." << endl;
}