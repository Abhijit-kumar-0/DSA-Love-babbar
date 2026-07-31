// #include<iostream>
// #include<math.h>
// using namespace std;

// double power(double x, int n) {
//     //base case
//     if(n == 0) {
//         return 1;
//     }
//     if(n<0) {
//         return 1.0/power(x,-n);
//     }

//     return x * power(x, n-1);
    
// }

// int main(){
//     double x;
//     int n;
//     cout << "Enter number x and n => (x^n) :" << endl;
//     cin >> x >> n;
//     double ans = power(x, n); 
//     cout << ans << endl;
// return 0;
// }

#include <iostream>
#include <climits>
using namespace std;

double power(double x, long long n) {
    // Base cases
    if (n == 0) return 1.0;
    if (n < 0) return 1.0 / power(x, -n); // Handles negative exponents

    // Calculate half power recursively to avoid duplicate calls
    double half = power(x, n / 2);

    if (n % 2 == 0) {
        return half * half;
    } else {
        return x * half * half;
    }
}

int main() {
    double x;
    int n;
    cout << "Enter number x and n => (x^n) :" << endl;
    cin >> x >> n;
    
    // Convert n to long long to handle INT_MIN safely
    double ans = power(x, (long long)n); 
    cout << ans << endl;
    return 0;
}