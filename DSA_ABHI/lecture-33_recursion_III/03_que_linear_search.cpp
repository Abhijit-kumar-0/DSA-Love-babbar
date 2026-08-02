#include<iostream>
using namespace std;

bool isFound(int arr[], int n, int target) {
    if(n == 0){
        return false;
    }
 
    if(arr[0] == target) {
        return true;
    }
    else {
        bool remainingPart = isFound(arr+1, n-1, target);
        return remainingPart;
    }

}

int main() {
    int arr[6] = {3,6,-2,7,0,-4};
    int target;
    cin >> target;
    int size = sizeof(arr)/sizeof(arr[0]);

    int ans = isFound(arr, size, target);

    if(ans) 
        cout << "found " << endl;
    else
        cout << "not found " << endl;
    

    
    return 0;
}