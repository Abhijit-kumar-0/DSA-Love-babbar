#include<iostream>
using namespace std;

inline int sum(int& a, int& b) {
    return a+b;
}

inline string Greater(int& a, int& b) {
    return (a>b) ? "a is greater" : "a is not greater";
}
int main() {
    int a = 3;
    int b = 5;

    cout << sum(a,b) << endl;
    // ternary operator
    cout << Greater(a,b) << endl;

    return 0;
}