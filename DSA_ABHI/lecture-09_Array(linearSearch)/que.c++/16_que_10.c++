// short arrays in accending order 0 1 2

#include<iostream>
using namespace std;

int main(){
    int arr[9] = {1,1,2,2,0,0,1,0,2};
    int k[3], l[3],m[3];
    int a=0,b=0,c=0;

    for(int i=0; i<9; i++){

        if(arr[i]==0){
            k[a] = arr[i];
            a++;
        }
        else if(arr[i]==1){
            l[b] = arr[i];
            b++;
        }
        else{
            m[c] = arr[i];
            c++;
        }
    }
        
        
        for(int i=0; i<a; i++){
            cout << k[i] << " ";
        }
       for(int i=0; i<b; i++){
            cout << l[i] << " ";
        }
        for(int i=0; i<c; i++){
            cout << m[i] << " ";
        }
    return 0;
}