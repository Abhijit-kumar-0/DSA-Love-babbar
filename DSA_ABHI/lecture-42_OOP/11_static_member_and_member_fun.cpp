#include<iostream>
using namespace std;

class Hero {
    public:
    int Health;
    char level;
    static int timetocount;

    getHealth(int health) {
        this -> Health = health;
    }
    getlevel(char level) {
        this -> level = level;
    }

    static void random() {
        cout << "static function: " << timetocount << endl << endl;

    }

    print() {
        cout << "Health: " << Health << endl;
        cout << "level: " << level << endl;
    }

};

int Hero::timetocount = 6;
int main(){

    // without object static member call
    cout << endl << "without object static member call: " << endl;
    cout << Hero::timetocount << endl;
    
    // static member function receive, only static member data
    cout << "static member function receive, only static member data: " << endl;
    Hero::random();

    Hero h1;
    h1.getHealth(20);
    h1.getlevel('A');
    h1.print();
    
return 0;
}