#include<iostream>
using namespace std;

void update(int array[], int size){
    array[0] = 120;
    cout << "Enter the function" << endl;
    
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }

    cout << endl << "Exit in function" << endl;
}
int main(){
    int array[3] = {3,7,30};

    update(array,3);  // call by function

    for(int i=0; i<3; i++){
        cout << array[i] << " ";
    }

    
    return 0;
}