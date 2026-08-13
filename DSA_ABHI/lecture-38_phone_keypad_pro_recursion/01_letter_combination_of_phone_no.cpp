#include<iostream>
#include<string>
#include<vector>
using namespace std;

void solve(string digit, int index, string mapping[], string output, vector<string>& ans) {

    // basecase
    if(index >= digit.length()) {
        ans.push_back(output);
        return;
    }

    int number = digit[index] - '0';
    string value = mapping[number];

    for(int i = 0; i<value.length(); i++) {
        output.push_back(value[i]);
        solve(digit, index+1, mapping, output, ans);
        output.pop_back();
    }

}

int main(){
    string digit = "123";
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    string output;
    int index = 0;
    if(digit.length() == 0) {
        for(auto & v : ans) {
        for(auto i : v) {
            cout << i << " ";
        }
    }
        // return ans;
    }
    solve(digit, index, mapping, output, ans);

    for(auto & v : ans) {
        for(auto i : v) {
            cout << i << " ";
        }
    }
return 0;
}