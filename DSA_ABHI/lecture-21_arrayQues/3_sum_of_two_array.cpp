// #include<iostream>
// #include<vector>
// using namespace std;

// int digForm(vector<int> v) {
//     int n = v.size();
//     int digit = 0;
//     for(int i=0; i<n; i++) {
//         digit = (digit * 10) + v[i];
//     }
//     return digit;
// }

// int main(){
// vector<int> v1 = {1,2,3,4};
// vector<int> v2 = {3,7,4};

// cout << digForm(v1) + digForm(v2);
// return 0;
// }

// other methods
#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> v) {
    int s = 0;
    int e = v.size()-1;
    while(s<=e) {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    for(int i:v) {
        cout << i;
    }
}

int main(){
vector<int> v1 = {3,4,5,6,7};
vector<int> v2 = {2,3,4};
vector<int> ans = {};

// addTwoVector(v1, v2);
int m = v1.size()-1;
int n = v2.size()-1;
int i = 0, j=0;
int sum = 0, carry = 0;

while(m>=i && n>=j) {
    sum = v1[m] + v2[n] + carry;
    carry = sum / 10;
    sum = sum%10;
    ans.push_back(sum);
    m--;
    n--;
};

while(m>=i) {
    sum = v1[m]+ carry;
    carry = sum / 10;
    sum = sum%10;
    ans.push_back(sum);
    m--;

};

while(n>=j) {
    sum = v2[n] + carry;
    carry = sum / 10;
    sum = sum%10;
    ans.push_back(sum);
    n--;

};

// reverse array
reverse(ans);
return 0;
}