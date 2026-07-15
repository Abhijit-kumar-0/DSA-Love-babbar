#include<iostream>
using namespace std;
// function signature
void printcount(int n){
    // function body
    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
}
int main(){
    int num;
    cout<<"Enter number" << endl;
    cin >> num;
    // function call
    printcount(num);   
}