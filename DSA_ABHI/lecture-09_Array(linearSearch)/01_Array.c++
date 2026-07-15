#include<iostream>
using namespace std;

void itarray(int abhi[], int size){
    for(int i=0; i<size; i++){
        cout << abhi[i] << " ";
    }
    cout << endl;
}
void ftarray(float abhi[], int size){
    for(int i=0; i<size; i++){
        cout << abhi[i] << " ";
    }
    cout << endl;
}
void crarray(char abhi[], int size){
    for(int i=0; i<size; i++){
        cout << abhi[i] << " ";
    }
    cout << endl;
}
int main(){
cout << "to print array stored data"<<endl;
int array1[10]={1,3,6,1,7,42,24,4,6,2};
int array2[3] ={3,23,6};
float array3[6]={1.2,5.1,6,3.3,0,2.3};
char array4[3]={'a','b','c'};
itarray(array1,10);
itarray(array2,3);
ftarray(array3,6);
crarray(array4,3);
    return 0;
}