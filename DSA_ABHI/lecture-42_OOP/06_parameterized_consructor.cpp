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
    
    Hero(bool login, int captureNo) {
        cout << "use this pointer: " << endl;
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
    temp.print();

return 0;
}