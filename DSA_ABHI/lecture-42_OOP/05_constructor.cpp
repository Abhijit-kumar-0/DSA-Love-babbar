//constructor
/*
1.doesn't return any datatype value
2.when create a class then automatically called itself
3.same name of class
4.the class has already constructor func, since we create any other function then previous constructor fun will die.
*/
#include<iostream>
using namespace std;

class Hero {
    public:
    Hero() {
        cout << "automatically called " << endl;
    }

};

int main() {

    // static obj
    Hero ramesh;

    // dynamically 
    // Hero *h = new Hero();
    Hero *h = new Hero;

    
    return 0;
}