#include<iostream>
using namespace std;
/* 
if you want to access the private data member outside the class 
you should use getter() {to read} & setter() {to write} function
*/
class Hero {

    private:
    int Health;
    char level;
    
    //you can see private data will access out of class
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

    Hero ramesh;

    // private so can't access directly
    // cout << ramesh.Health << endl;
    // cout << ramesh.level << endl;
    cout << "Before giving value:" << endl;
    cout << ramesh.getHealth() << endl;
    cout << ramesh.getlevel() << endl;
    
    // value set 
    ramesh.setHealth(70);
    ramesh.setlevel('A');
    
    
    cout << "After giving value:" << endl;
    cout << ramesh.getHealth() << endl;
    cout << ramesh.getlevel() << endl;
    
    return 0;  
}