#include<iostream>
using namespace std;

class A {

    public:
    void sayHello() {
        cout << "Hello: " << endl;
    }

    void sayHello(string namasty) {
        cout << "string pass :" << endl;
    }

    int sayHello(int age) {
        cout << "29" << endl;
    }
};

int main(){

    A a1;

    a1.sayHello();  
return 0;
}