#include <iostream>
using namespace std;

int main()
{
    // Allocate memory
    void* voidPtr = new int;

    // Convert to int*
    int* intPtr = static_cast<int*>(voidPtr);

    *intPtr = 42;

    cout << "Value from allocated memory: "
         << *intPtr << endl;

    delete intPtr;

    return 0;
}