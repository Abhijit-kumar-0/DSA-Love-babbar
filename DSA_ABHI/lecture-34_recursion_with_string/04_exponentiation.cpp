// #include<iostream>
// using namespace std;

// int foundExpo(int x, int y) {
//     // base case
//     if(y == 0) {
//         return 1;
//     }

//     // recursive relation

//     return  x * foundExpo(x, y-1);

    
// }

// int main() {
//     int x, y;
//     cout << "Enter base(x) and power(y) to found exponentiation (x^y) : ";
//     cin >> x >> y;

//     cout << "Ans: " << foundExpo(x,y);
    
    
//     return 0;
// }

// m-2
#include<iostream>
using namespace std;

int foundExpo(int x , int y) {
    // base case
    if(y == 0) {
        return 1;
    }

    if(y == 1) {
        return x;
    }

    int ans = foundExpo(x,y/2);

    if(y%2==0) {
        return ans * ans;

    }else {
        return x * ans * ans;

    }

}


int main() {

    int x, y;
    cout << "Enter base(x) and power(y) to found exponentiation (x^y) : ";
    cin >> x >> y;

    cout << "Ans: " << foundExpo(x,y);
    
    return 0;
}