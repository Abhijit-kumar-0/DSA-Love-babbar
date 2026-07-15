#include<iostream>
using namespace std;

int main() {
    int i = 1, num;
    cout << "Enter" << endl;
    cin >> num;
    while(i<=num)
    {
        int j = 1;
        while(j<=num)
        {
       int z = (num + 1) - j;
        cout << z << " ";
        j += 1;                
        }
    
    cout << endl;
    i += 1;
    }
}