// finding left and right most occurence element using linear search
#include<iostream>
using namespace std;

int firstcheck(int arr[], int n, int key);

int main(){
int arr[5] = {6,6,6,6,6};
int n;
cout << "Enter number: \n";
cin >> n;
firstcheck(arr, 5, n);

// cout << result;

}
int firstcheck(int arr[], int n, int key){
    for(int i=0; i<n; i++){
    // condition check
    if(arr[i]==key){
        cout << "start Index: " << i << endl;
        break;
    }else{
        return -1;
    }   
    }

    for(int i=n-1; i>=0; i--){
        if(arr[i]==key){
            cout << "end Index: " <<i << endl;
            break;
        }else {
            return -1;
        }
    }
//    cout << "not present" << endl;
    }