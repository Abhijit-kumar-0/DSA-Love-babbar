// sum of 1st to n even number
#include<iostream>
using namespace std;

int main() {

    int n, i = 0, sum = 0;
    cout << "Enter number" << endl;
    cin >> n;

    while(i<=n) {
        if(i%2==0) {
            sum = sum + i;
        }
        // cout << i << endl;
        i = i + 1;
    }
        cout << "Sum of even numbers are " << sum ;
    
    
}