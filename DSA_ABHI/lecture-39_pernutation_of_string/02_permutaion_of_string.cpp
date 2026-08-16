#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int>& nums, int index, vector<vector<int>>& ans) {
    // base case
    if(index >= nums.size()) {
        ans.push_back(nums);
        return;
    }

    for(int j = index; j<nums.size(); j++) {
        swap(nums[index], nums[j]);
        solve(nums, index + 1, ans);
        swap(nums[index], nums[j]);
    }
}
int main(){
    vector<int> nums = {1,2,3};
    int index = 0;
    vector<vector<int>> ans;

    solve(nums, index, ans);

for (const auto& v : ans)
{
    cout << "[ ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << "]";
}

return 0;
}