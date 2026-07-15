#include<iostream>
using namespace std;

bool searcharr(int arr[], int size, int n){
    int i=0;
    for(int i=0; i<size; i++){
        if(arr[i] == n)
        return 1;
    }
    return 0;
}

int main(){
    int arr[10] = {3,5,1,3,65,34,6,2,6,3};

    int keys;
    cout << "Enter the element to search" << endl;
    cin >> keys;
    // whether 1 is present or not in arr
    
    int x = searcharr(arr,10,keys);
    if(x==1)
    cout << "Present" << endl;
    else
    cout << "absent" << endl;
    return 0;
}