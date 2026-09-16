#include<iostream>
#include<vector>
using namespace std;

// hierarchical one class as parent and multiple child to inherited

class car {
    
    public:
    void carManufacture() {
        cout << "TATA Company" << endl;
    }

};

class wheels : public car {

    public:
    void Wheel() {
        cout << "apollo" << endl;
    }
};

class engines : public car {

    public:
    void engine() {
        cout << "tata engine" << endl;
    }

};

int main(){

    engines e;
    e.carManufacture();
    // e.Wheel(); // not applied because not inherit from wheel
    e.engine();

    wheels w;
    w.carManufacture();
    w.Wheel();
    

return 0;
}