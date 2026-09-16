#include<iostream>
using namespace std;

// in hybrid inheritance is combination of single and hierarchical inheritance
class A {

    public:
    void callA() {
        cout << "call class A " << endl;
    }
};

class D {

    public:
    void callD() {
        cout << "call class D " << endl;
    }
};

class B : public A{
    public:
    void callB() {
        cout << "call class B inherited from call A" << endl;
    }
};


class C : public A, public D{
    public:
    void callC() {
        cout << "call class C inherited from class A & class D" << endl;
    }
};

int main(){

    C c1;
    c1.callC();
    c1.callA();
    c1.callD();

    B b1;
    b1.callB();
    b1.callA();

return 0;
}