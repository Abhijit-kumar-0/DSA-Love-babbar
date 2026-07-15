// print all pair element are sum  is equal to 'S', & arrays are shorted(non decreasing order), similarly o/p.
// {1,2,3,4,7,9} , S=6
// 1,2,3 or 2,4

#include<iostream>
using namespace std;

void sumOfPair(int arr[], int size, int x);
int main(){
    int arr[6] = {-6,-2,2,3,6,8};
    int x;
    cout << "Enter the value of S: ";
    cin >> x;
    
    sumOfPair(arr,6,x);
    return 0;
}
void sumOfPair(int arr[], int size, int x){
    for(int i=0; i<size; i++){
        for(int j = i+1; j<size; j++){
            if(arr[i] + arr[j] == x){
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}