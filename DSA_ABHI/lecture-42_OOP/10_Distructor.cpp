#include<iostream>
using namespace std;
int count = 0;

class Hero {

    public:
    Hero() {
        count++;
        cout << "No, constructor called: " << count << endl;
    }

    ~Hero() {
        cout << "No, destructor called: " << count << endl;
        count--;
    }

};

int main(){

    // static object
    Hero h1,h2,h3,h4;

    // dynamic object can't be call destructor automatically we write manually
    // {delete p} like that
    Hero *p = new Hero();
    delete p;

return 0;
}