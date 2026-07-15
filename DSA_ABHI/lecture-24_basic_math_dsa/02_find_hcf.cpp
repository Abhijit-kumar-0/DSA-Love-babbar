// #include<iostream> 
// using namespace std;

// int main() {
//     int c = 1;
//     int a,b;
//     cin >> a >> b;
//     if(a<b) {
//         swap(a,b);
//     }
//     while(c) {
//         c = a%b;
//         if(c==0) {
//             cout << b;
//         }
//         b=c;
//         a=b;
//     }
//     cout << " exit";
//     return 0;
// }

#include<iostream>
using namespace std;

int GCD(int a , int b) {
    if(a==0) {
        return b;
    }
    GCD(a%b, b);
}

int main() {
    int a,b; 
    cout << "Enter the value a & b:";
    cin >> a >> b;
    if(a<b) {
        a = a+b;
        b = a-b;
        a = a-b;        
    }
    cout << GCD(a,b);    
    return 0;
    
}