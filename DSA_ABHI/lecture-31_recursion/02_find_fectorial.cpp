#include<iostream>
using namespace std;

int facto(int num) {

    // base case
    if(num == 0) {
        return 1;
    }
    int SmallerCase = facto(num - 1);
    int GreaterCase = num * SmallerCase;
    return GreaterCase;
}

int main() {

    int num;
    cout << "Enter number to find factorial" << endl;
    cin >> num;

    // call function
    cout << facto(num);
    
    return 0;
}