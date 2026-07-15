// Check input value are positive or negative. 
#include<iostream>
// using namespace std;

int main() {
    int n;
    std::cout << "Enter the number:\n";
    std::cin >> n;
    if(n>=0) {
        std::cout << n << " is positive" << "\n";
    } else {
        std::cout << n << " is negative"<< "\n";
    }
}