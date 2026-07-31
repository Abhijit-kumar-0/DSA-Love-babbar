// find the pivot in an array leetCode - 724.

// find the pivot in an array leetCode - 724.

#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int total = 0;
    for(int num : nums) {
        total += num;
    }

    int leftsum = 0;
    for(int i = 0; i < nums.size(); i++) {
        int rightsum = total - leftsum - nums[i];

        if(leftsum == rightsum) {
            return i; // Return INDEX, not the element value
        }

        leftsum += nums[i]; // Add current element to leftsum for next iteration
    }

    return -1; // If no pivot index found
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int ans = pivotIndex(nums);
    cout << "Pivot Index: " << ans << endl;
    return 0;
}