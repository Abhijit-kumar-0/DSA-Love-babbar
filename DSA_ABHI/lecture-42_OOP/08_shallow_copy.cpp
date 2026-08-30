#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class Hero {

    private:
    int Health;
    
    
    public:
    char level;
    char* name;

    /*
    default copy constructor will perform as shallow constructor
    shallow cons :- only one memory address assigned with two variables
    */


    Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    // copy constructor
    
    void setHealth(int h) {
        Health = h;
    }

    void setlevel(char ch) {
        level = ch;
    }

    void setname(char name[]) {
        strcpy(this -> name, name);
    }

    print() {
        cout << "[ Health: " << Health << ", ";
        cout << "level: " << level << ", ";
        cout << "name: " << name << "] ";
        cout << endl << endl;;
    }
};
int main() {

    Hero s;
    s.setHealth(20);
    s.setlevel('D');
    char name[30] = "abhijit";
    s.setname(name);

    cout << endl << "print s class data: " << endl;
    s.print();

    // use default copy constructor
    cout << endl << "print r class data: " << endl;
    Hero r(s);
    r.print();

    s.name[0] = 's';
    s.print();

    cout << endl;

    r.print();
    
    return 0;
}