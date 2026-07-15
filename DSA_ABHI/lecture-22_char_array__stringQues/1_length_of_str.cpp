#include<iostream>
using namespace std;

int length(char name[]) {
    int length = 0;
    while(name[length] != '\0') {
    length++;
    } 
    return length;
}

int main(){
char name[20];
cout << "Enter your name:" << endl;
cin >> name;

cout << "length of string is: " << length(name);
return 0;
}