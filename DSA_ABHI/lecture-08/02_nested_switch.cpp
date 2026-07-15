#include<iostream>
using namespace std;
int main(){
int i=1;
switch(i){
    case 4: cout << "First time" << endl;
    break;

    case 1: cout << "Second time" << endl;
            switch(3){
                case 1: cout << "first" << endl;
                break;
                case 2: cout << "second" << endl;
                break;
                case 3: cout << "Third" << endl;
                break;
            }
    break;

    default: cout << "it's default intger" << endl; // it is not complatory.
}
}