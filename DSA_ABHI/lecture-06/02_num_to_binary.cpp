// -ve number to convert binary number.
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number" << endl;
    cin >> n;

    if(n<0){
    int n1 = -(n);
    int bit, i = 0;
    int ans = 0;
    while(n1!=0) {

      bit = (n1&1);
      cout << bit;
      ans = (bit * pow(10, i)) + ans;
      n1 = n1 >> 1;
      i++;
    }
    } else{
      cout << "you not enter -ve number" << endl;
    }
}