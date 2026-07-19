#include<iostream>
using namespace std;

inline int power(int x) {
    // base case
    if(x == 0) {
        return 1;
    }

    // Recursive relation
    int SmallProb = power(x-1);
    int BigProb = 2 * SmallProb;
    
    return BigProb;

}

int main() {

    int n;
    cin >> n;

    cout << power(n);
    
    return 0;
}