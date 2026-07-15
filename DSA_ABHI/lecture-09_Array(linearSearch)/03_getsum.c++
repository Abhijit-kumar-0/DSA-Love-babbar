#include<iostream>
using namespace std;

int getsum(int num[], int n){
    int sum =0; 
    for(int i=0; i<n; i++){
        sum += num[i];
    }
    return sum;
}
int main(){
    int array[100],size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    cout << "Enter the numbers" << endl;
    for(int i=0; i<size; i++){
        cin >> array[i];
    }
    cout << "sum = " << getsum(array,size);
    return 0;
}