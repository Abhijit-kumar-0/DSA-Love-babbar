#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Hero {

    private:
    int Health;
    char level;
    char name[30];

    public:

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
        cout << "Health: " << Health << ", ";
        cout << "level: " << level << ", ";
        cout << "name: " << name << ", ";
    }
};
int main() {

    Hero s;
    s.setHealth(20);
    s.setlevel('D');
    char name[30] = "abhijit":
    s.setname(name);

    s.print();
    return 0;
}