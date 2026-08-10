#include<iostream>
#include<vector>
#include<set>
using namespace std;

void subset(vector<int> nums, int index, vector<int> output, vector<vector<int>>& ans) {

    // base case
    if(index >= nums.size()) {
        ans.push_back(output);
        return;
    }

    // exclude
    subset(nums, index + 1, output, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    subset(nums, index + 1, output, ans);

}

int main(){
    vector<int> nums = {1,2,2};
    int index = 0;
    vector<vector<int>> ans;
    vector<int> output;

    subset(nums, index, output, ans);

        // Use set to store unique vectors
    set<vector<int>> uniqueSet(ans.begin(), ans.end());

    // Convert back to vector
    vector<vector<int>> result(uniqueSet.begin(), uniqueSet.end());

    cout << "[ ";
for (const auto& v : result) {
    cout << "[";
    for (auto i : v) {
        cout << i << ",";
    }
    cout << "]";
}
    cout << " ]" << endl;


return 0;
}