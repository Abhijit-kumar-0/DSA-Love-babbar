//To print sum of three element == x;
#include<iostream>
using namespace std;

void TripleSum(int arr[], int size, int x);
int main(){
    int arr[9] = {-9,-6,-4,1,3,6,7,9,11};
    int s;
    cout << "Enter number " << endl;
    cin >> s;
    TripleSum(arr, 9,s);
    return 0;
}
void TripleSum(int arr[], int size, int x){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            for(int k=j+1; k<size; k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}