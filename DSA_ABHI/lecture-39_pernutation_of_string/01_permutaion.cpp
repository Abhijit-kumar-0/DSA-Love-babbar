#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// LeetCode 31: Next Permutation
void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;

    // Step 1: Find the first element from right where nums[i] < nums[i + 1] (pivot/break point)
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    // Step 2: If break point is found, find the element just greater than nums[i] from right
    if (i >= 0) {
        int j = n - 1;
        while (nums[j] <= nums[i]) {
            j--;
        }
        // Step 3: Swap nums[i] and nums[j]
        swap(nums[i], nums[j]);
    }

    // Step 4: Reverse elements from index i + 1 to the end
    reverse(nums.begin() + i + 1, nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3};

    cout << "Original vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    nextPermutation(nums);

    cout << "Next Permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}