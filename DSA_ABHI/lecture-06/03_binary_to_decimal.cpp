// #include<iostream>
// #include<math.h>
// using namespace std;

// int main() {
//     int n;
//     cout <<"Enter number"<< endl;
//     cin >> n;

//     int sum = 0, i = 0;
//     while(n!=0) {
//         int digit = n % 10;
//         if(digit == 1) {
//             sum = sum + pow(2 , i);
//         }
//         n = n/10;
//         i++;
//     }
//     cout << sum;

// }

#include<iostream>
#include<math.h>
int main(){
    int x;
    std::cout << "Enter number:\n";
    std::cin >> x;
    int ans = 0;
    int i = 0;
    while(x!=0)
    {
        int bit = (x&1);
        ans = (pow(2 , i) * bit) + ans;
        x = x >> 1;
        i++;
    }
    std::cout << "x = " << ans;
    
}