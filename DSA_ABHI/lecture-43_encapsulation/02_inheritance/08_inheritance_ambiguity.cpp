#include<iostream>
using namespace std;
// if i have two class and define the same data member function on both class.
// i want to inherited the function to 3rd new class and call through the object then confusion create which class function to call 
// so use ambiguity inheritance to resolve the confusion

class man {

    public:
    void lookingGood() {
        cout << "man looking nice " << endl;
    }
};

class boy {
    public:
    void lookingGood() {
        cout << "boy looking good " << endl;
    }
};

class amb : public man , public boy {
    public:

};

int main(){

    amb a1;
    // create ambiguity problem 
    // a1.lookingGood();

    // resolve ambiguity problem
    a1.boy::lookingGood();
    a1.man::lookingGood();

return 0;
}