//peek index in mountain array

// using linear search
// #include<iostream>
// using namespace std;

// int main(){
//  int  peek;
//  int arr[15] = {0,3,4,5,7,8,9,34,561,61,29, 21 ,2,0};
//  for(int i = 0; i < 11; i++)
// {
//     if(arr[i] < arr[i+1])
//     {
//         peek = arr[i+1];
//         continue;
//     }else{
//         cout << "peek is: " << peek << endl;
//         break;
//     }
// }
// return 0;
// }

// Binary search
#include<iostream>
using namespace std;

int main(void){

    int arr[12] = {1,3,4,5,6,7,8,9,2,-1,-3,-5};
    int start = 0, ans;
    int end = 11;
    // cout << "Size of arr:" << sizeof(arr)/sizeof(arr[0]) << endl;
    int mid = start + (end - start)/2;

    while(start < end){
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
            ans = arr[mid + 1];
        }else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    cout << "peek value is: " << ans;
}