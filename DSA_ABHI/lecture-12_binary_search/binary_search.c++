// search key in given array to use binary search concept.
#include<iostream>
using namespace std; 

int indexsearch(int arr[], int size, int key){
int start = 0; 
int end = size -1;

 int mid = (start + end) /2;  // not error show using  ----> mid = start + (end - statr)/2/;
    
while(start <= end){

    if(arr[mid] == key ){
        return mid;
    }
    // go to left part
    else if(arr[mid] > key){
        end = mid -1;
    }
    // go to right part
    else {
        start = mid + 1;
    }

    mid = (start + end)/2;
}
return -1;

}

int main() {
    int odd[7] = {1,3,4,6,7,8,23};
    int even[8] = {3,4,6,7,8,9,13,45};

    int ODD = indexsearch(odd, 7, 7);
    int EVEN = indexsearch(even, 8, 13);
    cout << "index : " << ODD << endl;
    cout << "index : " << EVEN;

    
}