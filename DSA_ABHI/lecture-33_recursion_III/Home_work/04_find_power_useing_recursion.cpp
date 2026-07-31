#include<iostream>
#include<math.h>
using namespace std;

double power(double x, int n) {
    //base case
    if(n == 0) {
        return 1;
    }
    if(n<0) {
        return 1.0/power(x,-n);
    }

    return x * power(x, n-1);
    
}

int main(){
    double x;
    int n;
    cout << "Enter number x and n => (x^n) :" << endl;
    cin >> x >> n;
    double ans = power(x, n); 
    cout << ans << endl;
return 0;
}