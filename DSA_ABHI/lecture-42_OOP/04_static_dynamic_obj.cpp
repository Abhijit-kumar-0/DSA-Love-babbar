#include<iostream>
using namespace std;

class Hero {

    private:
    // public:
    int Health;
    char level;
    
    public:
    int getHealth() {
        return Health;
    }

    char getlevel() {
        return level;
    }

    void setHealth(int h) {
        Health = h;
    }

    void setlevel(char ch) {
        level = ch;
    }

};
int main() {

    // static allocation
    Hero a;
    a.setHealth(10);
    a.setlevel('z');
    cout << "static allocation" << endl;
    cout << a.getHealth() << endl;
    cout << a.getlevel() << endl;

    // dynamically allocation
    Hero *b = new Hero;     
    b->setHealth(60);
    b->setlevel('A');

    cout << "dynamically allocation" << endl;
    cout << b->getHealth() << endl;
    cout << b->getlevel() << endl;

    // use when Health is public
    // b->Health = 20;
    // cout << b->Health << endl;
    return 0;  
}