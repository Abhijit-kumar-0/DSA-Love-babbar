#include<iostream>
using namespace std;

int main(){
cout << "Enter number of row";
int row;
cin >> row;
for(int i=0; i < row; i++){
    for(int j=0; j < row; j++){
        char a = 'A' + i;
        cout << a << " ";
    }

    cout << endl;
}

return 0;
}