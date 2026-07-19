#include<iostream>
using namespace std;

void print(int num) {
    if(num == 0) {
        return ;
    }
    
    print(num - 1);
    cout << num << endl;

}

int main() {

    int num;
    cin >> num;
    cout << endl;

    print(num);
    return 0;
}