#include<iostream>
using namespace std;

int main(){
    int num;
    string binary = "";
    cout << "Enter number \n";
    cin >> num;
    while(num != 0){
        binary = char((num & 1) + '0') + binary;
        num = num >> 1;
    }
    cout << binary;
    return 0;
}