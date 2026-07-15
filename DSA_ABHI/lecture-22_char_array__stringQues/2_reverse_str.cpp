#include<iostream>
using namespace std;

int lengthStr(char name[]) {
    int length = 0;
    while(name[length] != '\0') {
        length++;
    } 
    return length;
};

void reverseStr(char name[]) {
    int s = 0;
    int e = lengthStr(name)-1;
    char temp;

    while(s<=e) {
        swap(name[s++],name[e--]);
    }
}

int main(){
char name[20];
cout << "Enter your name:" << endl;
cin >> name;

reverseStr(name);
for(int i=0; name[i]!='\0'; i++) {
    cout << name[i];
}
return 0;
}