#include<iostream>
#include<math.h>
using namespace std;

int getmax(int num[], int n){
    int mini =  pow(-2,31);      // range of integer (-2^31, 2^31-1)
    for(int i = 0; i<n; i++){
    mini = max(mini,num[i]);
    // if(num[i] > mini){
    //     mini = num[i];
    // }     
    }
    return mini;
}
int getmin(int num[], int n){
    int maxi = pow(2,31) - 1 ;      // range of integer (-2^31, 2^31-1)
    for(int i = 0; i<n; i++){
    // if(num[i] < maxi){
    //     maxi = num[i];
    // }     
    maxi = min(maxi,num[i]);
    }
    return maxi;
}
int main(){
    int size;
    cout << "how much enter number:\n";
    cin >> size;
    int num[100];

    cout << "Enter " << size << " numbers:" << endl;
    // taking number in array
    for(int i=0; i<size; i++){
    cin >> num[i];
    }
   cout << "Greatest number is: " << getmax(num,size) << endl;
   cout << "mininum number is: " << getmin(num,size) << endl; 
    return 0;
}