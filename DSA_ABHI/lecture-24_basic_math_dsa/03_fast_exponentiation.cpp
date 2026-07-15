#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int x,n,m;
    cout << "enter value of x , n , m" << endl;
    cin >> x >> n >> m;

    int res = 1;

    while(n>0) {

        if(n&1) {
            //odd
            res = (res * (x)%m)%m;
        }
        x = ((x)%m * (x)%m)%m;
        n = n>>1;
    }
    cout << res;
    return 0;
}