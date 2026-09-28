#include<iostream>
using namespace std;

// function overloading with different no. of argument
class A {

    public:
    void demo(int x, int y) {
        cout << "no. of two argument pass" << endl;
    }

    void demo(int x, int y, int z) {
        cout << "three parameter pass: from main " << endl;
    }
};

// function overloading with different type of argument

class B {

    public:
    void temp(int x, int y) {
        cout << "class B called" << endl;
    }

    void temp(double x, double y) {
        cout << "different type of parameter " << endl;
    }
};

// default argument 

class C {
    public:
    void def(int x, int y, int z, int m = 0, int n = 0) {
        cout << "def argument: " << endl;
    }
};

int main(){
 A ob1;
    ob1.demo(29, 20);
    ob1.demo(23, 12, 5);

 B ob2;
    ob2.temp(23,12);
    ob2.temp(23.3, 12.3);

 C ob3;
    ob3.def(2,3,4);
    ob3.def(2,3,6,2);
    ob3.def(2,4,6,2,3);

return 0;
}