// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
// int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
// int row = 3;
// int col = 4;
// int s = 0;
// int e = row*col-1;
// int target;
// cout << "enter number";
// cin >> target;
// int mid = s+(e-s)/2;

// while(s<=e) {
//     int element = arr[mid/col][mid%col];
//     if(element==target) {
//         cout << "found";
//         return 0;
//     }
//     else if(element>target) {
//         e=mid-1;
//     }
//     else if(element<target) {
//         s=mid+1;
//     }
//     mid = s+(e-s)/2;
// }
// cout<<"not found";
// return 0;
// }
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    bool searchMatrix(vector<vector<int>> matrix, int target) {
      int row = matrix.size();
      int col = matrix[0].size();
      int s = 0;
      int e = (row*col)-1;
      int mid = s + (e-s)/2;

      while(s<=e) {
        if(matrix[mid/col][mid%col] == target) {
            return 1;
        }
        if(matrix[mid/col][mid%col] > target) {
            e = mid - 1;
        }else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
      } 
      return 0;
    }
};

int main(){
    vector<vector<int>> v = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}};
    Solution obj;
    int target;
    cout << "enter value:\n";
    cin >> target;
    bool found = obj.searchMatrix(v,target);
    cout << (found ? "Found" : "Not Found") << endl;
    return 0;
}