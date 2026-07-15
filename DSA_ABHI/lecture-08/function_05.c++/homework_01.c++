// a.p = 3*n+7   
// i/p => n = 4 
// o/p => 3*4+7 = 19. 
#include<iostream>
using namespace std;

int ap_value(int a){
    int result = 3*a+7;
    return result;
}
int main(){
    int n;
    cout << "Enter n"<< endl;
    cin>>n;
    cout << ap_value(n);
    return 0;
}