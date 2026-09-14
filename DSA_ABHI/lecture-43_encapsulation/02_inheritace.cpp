#include<iostream>
#include<string>
using namespace std;

/* accesss modifier
 base class |   public      |   protected   |   private 

 public     |   public      |   protected   |   private
 protected  |   protected   |   protected   |   private
 private    |   not access  |   not access  |   not access
*/

// public:- any where use the given data member and member function
// protected:- only applicable in class and child class not usable outside the class
// private:- only applicable in base class

class Human {

    public:
    int height;
    int weight;
    char color;

    protected:
    int age;

    private:
    string name;

};

// inheritance public to public = public
class male1 : public Human {

    public:
    // for public case


    // for protected case
    void setage(int age) {
        this -> age = age;
    }

    int getage() {
        return age;
    }

    // for private case not derive from private data to child class 
    void setname(string name) {
        this -> name = name;
    }

    string getname() {
        return name;
    }

};

// inheritance public to protected = protected
class male2 : protected Human {
    public:
    // for public case
    void setheight(int height) {
        this -> height = height;
    }

    int getheight() {
        return height;
    }

    // for protected case
    void setage(int age) {
        this -> age = age;
    }

    int getage() {
        return age;
    }

};

// inheritance public to private = private
class male3 : private Human {

    public:
    // for public case
    void setheight(int height) {
        this -> height = height;
    }

    int getheight() {
        return height;
    }

    // for protected case
    void setage(int age) {
        this -> age = age;
    }

    int getage() {
        return age;
    }

};

int main(){
    male1 m1;
    male2 m2;
    male3 m3;

    // public
    m1.height = 6;
    cout << "height: " << m1.height << endl;

    m2.setheight(7);
    cout << "height: " << m2.getheight() << endl;

    m3.setheight(5);
    cout << "height: " << m3.getheight() << endl;

    // protected
    m1.setage(20);
    cout << "age: " << m1.getage() << endl;

    m2.setage(21);
    cout << "age: " << m2.getage() << endl;

    m3.setage(22);
    cout << "age: " << m3.getage() << endl;

    // private : return error because name declared private
    // string name = "abhijit";
    // m1.setname(name);
    // cout << "name: " << m1.getname() << endl;
return 0;
}