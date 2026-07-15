// if 1330 rupee then how many 100,50,20,1 notes
#include<iostream>
using namespace std; 
int main(){
int num,a,b,c;
cout<<"Enter number"<< endl;
cin >> num;
cout << "Number of notes nessesrey 100,50,20,1"<< endl;

switch(100){  // because 1st case true than above case run
    case 100: cout << " 100 notes: "<< num/100 << endl;
    a = num%100;

     case 50: cout << "50 notes: " << a/50 << endl;
     b= a%50;

    case 20: cout<< "20 notes: " << b/20 << endl;
    c=b%20;

    case 1: cout << "1 notes: " <<c/1 << endl;

}
}