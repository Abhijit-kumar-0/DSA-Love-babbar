#include<iostream>
using namespace std;
class Hero {

    private:
    int login;
    int captureNo;

    public:
    int Health;
    char level;

    // static call
    Hero(int Hel) {
        Health = Hel;
        cout << "health: " << Health << endl;
    }

    // dynamic call
    print1(char h) {
        level = h;
    }

    /* also be use that func
    Hero(bool fetch, int x) {
        login = fetch;
        captureNo = x;
    }
    */
    
    /*
    this pointer is stored the current object address
    */

    Hero(bool login, int captureNo) {
        cout << "this is a pointer: " << this << endl;
        this -> login = login;
        this -> captureNo = captureNo;
        
    }

    print() {
        cout << "login: " << login << endl;
        cout << "captureNo: " << captureNo << endl;
    }
};
int main(){

    // parameterized constructor
    Hero ramesh(20);

    // dynamically called 
    Hero *b = new Hero(50);

    Hero temp(true, 20);
    cout << "address:" << &temp << endl;
    temp.print();

return 0;
}