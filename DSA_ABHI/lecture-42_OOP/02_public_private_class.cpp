#include<iostream>
//#include "filename.cpp"  // you can access class data form other file
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
// only private data can access in class

// create object
Hero Ramesh;

// set the value
Ramesh.Health = 70;

//excess the class data use dot(.) operator before created the object
cout << "Access the public data from the class: " << Ramesh.Health << endl; 

// cout << "can't be Access the private date from out side the class: " << Ramesh.level << endl;





return 0;
}