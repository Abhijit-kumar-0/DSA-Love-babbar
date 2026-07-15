// sum 1st to nth number
#include<iostream>
using namespace std; 
 
int main() {

    int num;
    cout << "Enter number" << endl;
    cin >> num;
    int sum = 0;
    int i = 1;
    while(i<=num) {
        
        sum = sum + i;     // sum += i; 
        i = i + 1;
    }    
        cout << "Sum of number is: "<< sum;

}