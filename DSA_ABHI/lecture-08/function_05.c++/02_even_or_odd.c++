#include<iostream>
using namespace std;

int isEven(int a){
    if(a%2==0)
    cout<<"even"<<endl;
    else 
    cout<<"odd"<<endl;
    // return 0;
}
int main(){
    int num;
    cout<<"Enter number"<<endl;
    cin>>num;
    isEven(num);
}