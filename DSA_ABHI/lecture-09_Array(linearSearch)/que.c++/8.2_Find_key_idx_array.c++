// find index of element in array user enter element.
#include<iostream>
using namespace std;

int indexC(int arr[], int size, int x);
int main(){
    int array[10] = {3,5,7,2,3,67,1,3,7,5};
    int n;
    cout << "Enter element" << endl;
    cin >> n;

   int result = indexC(array,10,n);
   if(10>result)
   cout << "index is: " << result;
   else
    cout << "not present in an array" << endl;

    return 0;
}

int indexC(int arr[], int size, int x){
    for(int i=0; i<size; i++){
        if(x==arr[i])
        return i;
    }
    return size;
}
