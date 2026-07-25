#include<iostream>
using namespace std;

int Destination(int nStair) {

    // Base case 
    if(nStair == 0) {
        return 1;
    }
    if(nStair < 0) {
        return 0;
    }

    // R.R
    int ans = Destination(nStair-1) + Destination(nStair-2);

    return ans;
}

int main() {
    int nStair;

    cout << "enter number of stairs" << endl;
    cin >> nStair;

    cout << "Number of steps: " << Destination(nStair);

    return 0;
}