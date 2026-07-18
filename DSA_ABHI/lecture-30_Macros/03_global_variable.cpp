#include<iostream>
using namespace std;
// global variable is not use 
int i = 4;

void check(int& j) {
    cout << "before increment: " << j++ << endl;
    cout << "after increment: " << i << endl;
}
int main() {

    for(int j=0; j<i; j++) {
        cout << j << " ";
    }
    cout << i << endl; 

    check(i);
    return 0;
}