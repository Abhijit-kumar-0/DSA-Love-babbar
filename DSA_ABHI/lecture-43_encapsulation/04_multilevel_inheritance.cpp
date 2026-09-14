#include<iostream>
using namespace std;

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