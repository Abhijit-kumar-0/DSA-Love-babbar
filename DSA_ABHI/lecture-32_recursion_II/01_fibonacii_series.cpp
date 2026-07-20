#include<iostream>
using namespace std;

void fibonacci(int n, int s, int s1) {
    // base case
    if(n == 0) {
        return;
    }
    
    n--;
    cout << s << " ";
    // recursive relation
    fibonacci(n, s1, (s+s1));
}

int fibo(int n) {

    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    int ans = fibo(n-1) + fibo(n-2);
    cout << ans << ">?-";
}


int main() {
    int n;
    cout << "Enter num and get Fibonacci series:" << endl;
    cin >> n;

        // process
    int s = 0;
    int s1 = 1;

    // fibonacci(n, s, s1);
    fibo(n);
    return 0;
}