#include<iostream>
using namespace std;

int main(){
for(int j = 1; j <= 5; j++){
    for(int i = 1; i <= 6-j; i++){
        cout << i << " ";
    }
    for(int k = 0; k < j-1; k++){
        cout << "*" << " ";
    }

    for(int i=1; i<=(j-1); i++){
        cout << "*" << " ";
        }
    for(int m = (5-(j-1)); m>0; m--){
        cout << m << " ";
    }
cout << endl;
}
return 0;
}