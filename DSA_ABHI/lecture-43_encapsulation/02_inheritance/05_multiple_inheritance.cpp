#include<iostream>
using namespace std;

// one child class inherit data member from more than two class
class animal {

    public:
    void bark() {
        cout << "animal bark" << endl;
    }

};

class Human {
    public:
    void speak() {
        cout << "human speak" << endl;
    }
};

class multiple : public animal , public Human {

    public:
    multiple() {
        cout << "successful call : multiple inheritance " << endl;
    }

};

int main(){

    multiple m;
    m.speak();
    m.bark();

return 0;
}