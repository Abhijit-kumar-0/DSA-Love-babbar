#include<iostream>
using namespace std;

int main() {
    int a = 2;
    char b = 'a';
//  char wrong = 'ab';  // single inverted comma me single char rahega.
    float c = 12.5;
    double d = 23.61;
    bool e = true;

    cout << a << endl;  // 2
    cout << b << "\n";  // a
    cout << c << endl;  // 12.5
    cout << d << endl;  // 23.61
    cout << e << endl;  // 1

    int size = sizeof(a);
    cout << "size of a is: " << size << endl;  // size of a is: 4

}