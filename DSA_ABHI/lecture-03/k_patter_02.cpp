#include<iostream>
using namespace std;

int main() 
{
    int i = 1, num;
    cout << "Enter" << endl;
    cin >> num;
    while(i<=num)
    {
        int n = 1;
        while(n<=num)
        {
            cout << i;
            n = n + 1;
        }
    cout << endl;
    i = i + 1;
    }
}