#include<iostream>
using namespace std;

// a child class inherit the data member from parent then child class data inherited to other child and so on

class animal {
    public:
    int age;
    string color;

    void bark() {
        cout << "animal bark" << endl;
    }

};


class dog : public animal {


};

class streetDog : public dog {

    public:
    void dogesh() {
        cout << "Dogesh bahi" << endl;
    }
};


int main(){

    streetDog d;
    d.dogesh();
    d.bark();

return 0;
}