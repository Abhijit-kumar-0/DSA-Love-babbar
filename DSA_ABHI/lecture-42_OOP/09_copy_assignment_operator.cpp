#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

class Hero {

    private:
    int health;
    
    public:
    char *name;
    char level;

    Hero() {
        // default constructor
        cout << "automatic call: " << endl;
        name = new char[100];
     }

    void setHealth(int health) {
        this->health = health;
    }
    void setName(char name[]) {
        strcpy(this->name, name);
        
    } 
    void print() {
        cout << "name: " << this->name << " ]";
        cout << "[ health: " << this->health << ", ";
        cout << endl;
    }
};

int main(){

    Hero a;
    a.setHealth(20);
    char name[10] = "Abhijit";
    a.setName(name);
    a.print();

    Hero b;
    b.setHealth(30);
    name[0] = 'S';
    b.setName(name);
    b.print();

    // copy assignment operator
    b = a;
    b.print();

return 0;
}