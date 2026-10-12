#include<iostream>
#include<vector>
using namespace std;

class B {
    public:
    int a;
    int b;

    // use + operator to overload and subtract values
    void operator+ (B &obj) {
        int val1 = this-> a;
        int val2 = obj.a;

        cout << "subtraction: " << val2 - val1 << endl;
    }
    // use () [parentheses] operator to print
    void operator() () {
        cout << "hello " << endl;
    }

    void operator* (B &obj) {
        int val1 = this->a;
        int val2 = obj.a;

        cout << "divide: " << val2/val1 << endl;
    }

};


int main() {
    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1+obj2;

    // parentheses
    obj1();

    // estric operator *
    obj1*obj2;


    return 0;
}