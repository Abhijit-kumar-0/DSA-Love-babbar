#include<iostream>
#include<cstring>
using namespace std;

class Hero {

    private:
    int Health;
    
    public:
    char *name;
    char level;

    Hero() {
        cout << "automatically called default constructor: " << endl;
        name = new char[100];
    }

    void setHealth(int Health) {
        this->Health = Health;
    }

    void setlevel(char level) {
        this->level = level;
    }

    void setname(char name[]) {
        strcpy(this->name, name);
    }

    // deep copy constructor
    Hero(Hero& temp) {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
    }

    void print() {
        cout << "[ name: " << name << " ,";
        cout << "health: " << Health << " ,";
        cout << "level: " << level << " ]" << endl;
        cout << endl; 
    }
};
int main(){
    Hero R;
    R.setHealth(40);
    R.setlevel('D');
    char name[10] = "Abhijit";
    R.setname(name);
    cout << endl << "this data of R object:" << endl;
    R.print();
    

    // copy object
    Hero h(R);
    R.name[0] = 'S';
    cout << endl << "print the R object data after change the name" << endl;
    R.print();
    
    cout << endl << "print the h object data" << endl;
    h.print();

return 0;
}