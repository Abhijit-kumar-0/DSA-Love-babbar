// if unique no. of occurance - true nahi toh false.
// {1,3,4,4,1,1}
// 1=> 3  3=> 1     4=> 2
// {3,1,2} = true bcoz unique number not any one same.
#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>

using namespace std;
bool uniqueOccurrences(vector<int>&arr){
    unordered_map<int, int> countMap;
    unordered_set<int> occurrenceSet;
    
    for(int num : arr) {
        countMap[num]++;
    }

    for(auto& pair : countMap){
        if(occurrenceSet.find(pair.second) != occurrenceSet.end()) {
            return false;
        }
        occurrenceSet.insert(pair.second);
    }
    return true;
}
int main(){
    vector<int> arr = {1, 2, 2, 1, 1, 2};
    cout << (uniqueOccurrences(arr)?"ture" : "false") << endl;
    return 0;
}