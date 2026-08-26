#include <iostream>
#include<string>
using namespace std;

class Hero {
  public:
  string profile;
  int age;

  Hero(string profile, int age) {
    this -> profile = profile;
    this -> age = age;
  }

  print() {
    cout << "profile: " << profile << endl;
    cout << "age: " << age << endl;
  }
};

int main(){
    
  Hero pinku("pinku", 20);
  pinku.print();

  // copy constructor
  Hero temp(pinku);
  cout << endl << "copy constructor" << endl;
  temp.print();

  return 0;
}