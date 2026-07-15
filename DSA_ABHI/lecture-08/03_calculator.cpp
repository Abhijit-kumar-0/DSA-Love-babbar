#include<iostream>
using namespace std;

int main(){
 int a,b;
 char ch;
cout << "Enter the value of a & b:" << endl;
cin >> a >> b;
cout << "Enter operator +,-,*,/,%" << endl;
cin >> ch;
switch(ch) {
    case '+': cout << a+b;
    break;

    case '-': cout << a-b;
    break;

    case '*': cout << a*b;
    break;

    case '/': cout << a/b;
    break;

    case '%': cout << a%b;
    break;
    
    default: cout << "Invalid operator use"<< endl;
}

}