#include<iostream>
using namespace std;

class Hero {
    public:
    int Health;

    private:
    char level;
};

int main(){
// by default class has been private
// public data can access any where in class or int main
// private only access in class

// create object
Hero Ramesh;

cout << "Access the public date from the class: " << Ramesh.Health << endl;
// cout << "can't be Access the private date from out side the class: " << Ramesh.level << endl;





return 0;
}