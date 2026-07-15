#include<iostream>
using namespace std;
int main(){
    int a='z';
    switch(a){
        case 'a': cout << "first time" << endl;
        break;
        case 'z': cout << "sencod time" << endl;
        break;
        default: cout <<"it is invalid char"<< endl;
    }
}
