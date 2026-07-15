#include<iostream>
using namespace std;

int update(int &n) {
    n++;
}

int main(){
/*
int i = 5;
//create reference variable
int &j = i;
cout << i << endl;
i++;
cout << i << endl;
j++;
cout << i << endl;
*/

// In function we use pass by reference
int j = 3;
cout << "before: " << j << endl;
update(j);
cout << "After: " << j << endl;

return 0;
}