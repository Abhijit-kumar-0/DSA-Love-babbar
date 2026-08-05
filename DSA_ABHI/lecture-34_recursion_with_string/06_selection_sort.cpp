#include<iostream>
#include<vector>
using namespace std;

void insort(vector<int>& nums, int n) {

    int st = (nums.size()-n);
    int s = st;
    int i = st;
    
    // base case
    if(n == 0 || n == 1) {
        return ;
    }
    
    int min = nums[st];

    while(s<nums.size()-1) {
        if(nums[s+1] < min) {
            min = nums[s+1];
            i = s+1;
        }
        s++;
    }
    swap(nums[i], nums[st]);

    insort(nums, n-1);
}

int main() {

    vector<int> nums = {0,0,1,-2,4};
    int size = nums.size();

    insort(nums, size);

    for(int i : nums) {
        cout << i << " ";
    } 
    
    return 0;
}