#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    bool matrixsearch(vector<vector<int>>& matrix, int target) {

        int row = matrix.size();
        int col = matrix[0].size();
        int startingrow = 0;
        int endingcol = col-1;

        while(startingrow<row && endingcol >= 0) {
            int element = matrix[startingrow][endingcol];
            if(element == target) {
                return 1;
            }
            if(element > target) {
                endingcol--;
            }
            else if(element < target) {
                startingrow++;
            }
        }
        return 0;
    }
};

int main() {
    Solution obj;
    vector<vector<int>> v = {
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}};
    int target;
    cout << "Enter number:\n";
    cin>> target;
    bool value = obj.matrixsearch(v,target);
    cout << (value? "found" : "Not found") << endl;
    return 0;
}