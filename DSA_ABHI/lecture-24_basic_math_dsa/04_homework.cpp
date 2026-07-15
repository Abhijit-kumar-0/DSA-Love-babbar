// wrong code
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    cout << "Enter the factorial number: ";
    int num , m = pow(10, 9) + 7; 
    int res = 1;
    cin >> num;

    while(num) {
        res = (res * (num)%m)%m;

        num--;
    }
    cout << res;
    return 0;
}