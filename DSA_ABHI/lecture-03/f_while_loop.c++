// print number 1st to nth number
#include<iostream>
using namespace std;

int main() {
    int num; 
    cout << "Enter number:" << endl;
    cin >> num;
    int a = 1;
    while(a<=num) {
        cout << a << " ";
        a++; // a = a + 1;
    }
    
}