#include<iostream>
#include<vector>
using namespace std;

void Ssorting(vector<int>& nums, int idx, int n) {
    // base case
    if(n == 0 || n == 1) {
        return;
    }   
    int s = 0;
    int e = idx+1;

    while(s<e) {
        if(nums[e-1] > nums[e]) {
            swap(nums[e-1], nums[e]);
            e--;
        } 
        else{
            break;
        }
    }

    return Ssorting(nums, idx+1, n-1);
}

int main(){

    vector<int> nums = {0,0,1,-2,4};
    int size = nums.size();

    Ssorting(nums, 0, size);

    for(auto i : nums) {
        cout << i << " ";
    }
return 0;
}