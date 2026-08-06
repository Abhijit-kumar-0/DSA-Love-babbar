#include<iostream>
#include<vector>
using namespace std;

void dividearr(vector<int>& nums, int s, int e) {

    // base case
    if(s >= e) {
        return;
    }
    
    
    int mid = s + (e-s)/2;
    // left part
    dividearr(nums, s, mid);

    // right part
    dividearr(nums, mid+1, e); 

}

int main() {

    vector<int> nums = {0,9,2,4,6,-1,3,8};

    dividearr(nums,0,nums.size()-1);
    
    
    return 0;
}