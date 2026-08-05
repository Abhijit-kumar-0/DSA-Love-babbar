#include<iostream>
#include<vector>
using namespace std;

void mergeTwo(int *nums, int s, int e) {

    int mid = s + (e-s)/2;
    int len1 = (mid - s)+1;
    int len2 = (e - mid);

    int *first = new int[len1];
    int *second = new int[len2];

    int mainarrayindex = s;

    // store first array
    for(int i=0; i<len1; i++) {
        first[i] = nums[mainarrayindex++];
    }

    mainarrayindex = mid + 1;
    // store second array
    for(int i = 0; i<len2; i++) {
        second[i] = nums[mainarrayindex++];
    }

    // merge two array with sorted
    int index1 = 0;
    int index2 = 0;
    mainarrayindex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            nums[mainarrayindex++] = first[index1++];
        }
        else {
            nums[mainarrayindex++] = second[index2++];
        }
    }

    while(index1 < len1) {
        nums[mainarrayindex++] = first[index1++];
    }
    while(index1 < len1) {
        nums[mainarrayindex++] = second[index2++];
    }

    // delete memory
    delete []first;
    delete []second;
}

void mergeSort(int *nums, int s, int e) {
    
    
    // base case
    if(s >= e) {
        return ;
    }
    
    int mid = s + (e-s)/2;
    // first part break
    mergeSort(nums, s, mid);

    // second part break
    mergeSort(nums, mid+1, e);

    // merger two vector 
    mergeTwo(nums, s, e);
}   

int main() {

    int nums[8] = {0,9,2,4,6,-1,3,8};
    int size = sizeof(nums)/sizeof(nums[0])-1;
    mergeSort(nums, 0, size);

    for(int i : nums) {
        cout << i << " ";
    }
    return 0;
}