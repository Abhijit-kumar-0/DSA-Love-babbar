#include<iostream>
#include<vector>
#include<string>
using namespace std;

void subsequence(string str, string output, int idx, vector<string>& ans) {

    // base case
    if(idx >= str.size()) {
        if(output.size() > 0) {
            ans.push_back(output);
        }
        return;
    }

    // no take
    subsequence(str, output, idx + 1, ans);

    // take
    char ch = str[idx];
    output.push_back(ch);
    subsequence(str, output, idx + 1, ans);
}

int main(){

    string str = "abc";
    vector<string> ans; 
    string output = "";
    int idx = 0;

    subsequence(str, output, idx, ans);

    for(int i = 0; i<ans.size(); i++) {
            cout << ans[i] << endl;
    }

return 0;
}