#include<iostream>

using namespace std; 

    int GCD(int a, int b) {
        if(b==0) {
            return a;
        }
        
        return GCD(b,a%b);
        
    }

int main(){
    cout << "Enter num: " << endl;
    int num;
    cin >> num;

    int SumOdd = 0;
    int SumEven = 0;
    int k = 1;
    while(k <= 2*num) {
        
        if(k%2 == 0) {
            SumEven += k;
        }
        else {
            SumOdd += k;
        }
        k++;
    }

    int ans = GCD(SumOdd, SumEven);
    cout << endl << "ans: " << ans << endl;
    return (0);
}