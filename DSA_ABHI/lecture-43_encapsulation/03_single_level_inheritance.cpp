#include<iostream>
using namespace std;

class Animal {

    public:
    int age;
    string color;

    void bark() {
        cout << "animal bark " << endl;
    }
};

// singlelevel inheritance
class dog : public Animal {
    public:
    void eat() {
        cout << "chapati" << endl;
    }
};
int main(){

    dog d;
    d.eat();
    d.bark();

return 0;
}