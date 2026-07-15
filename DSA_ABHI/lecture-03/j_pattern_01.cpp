#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    while (n <= 4)
    {
        int i = 1;
        while (i <= 4)
        {
            cout << "*";
            i = i + 1;
        }
        cout << endl;
        n = n + 1;
    }
}