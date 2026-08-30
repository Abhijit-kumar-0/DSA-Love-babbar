#include <iostream>
#include<string>
using namespace std;

class Hero {
  public:
  string profile;
  int age;

  Hero() {
    cout << "simple constructor: " << endl;
  }

  // parameterized constructor
  Hero(string profile, int age) {
    this -> profile = profile;
    this -> age = age;
  }

  print() {
    cout << "profile: " << profile << endl;
    cout << "age: " << age << endl;
  }
  
  // create a copy constructor to copy data manually if you not use will copy by default
  // Hero& why use:- because use pass by reference, & not use then pass by value and gives an errors
  Hero(Hero& copy) {
    cout << endl << "copy constructor call" << endl;
    this -> profile = copy.profile;
    this -> age = copy.age;
  }

};

int main(){
    
  // create R object as parameterized constructor
  Hero R("pinku", 20);
  R.print();

  // copy constructor
  // by default will copy the data from R to temp object. when you create copy constructor object
  Hero temp(R);
  // Hero temp = R; // second option 
  temp.print();

  return 0;
}