// #include<iostream>
// #include<array>
// using namespace std;

// int countCall(const array<char, 7>& arr, int i) {
//     int j=i, count = 0;
//     while(arr[i] == arr[j]) {
//         count++;
//         j++;
//     }
//     return count;
// }

// int main() {
//     array<char, 7> arr = {'a','a','b','b','c','c','c'} ;
//     array<char,0> arr1;
//     // cout << arr1.size();

//     for(int i=0; i<arr.size(); i++) {
//         char ch = arr[i];
//         int count = 0,idx = 0;
//         count = countCall(arr,i);
//         arr1[idx++] = ch;
//         arr1[idx++] = count;
//         i = i + count - 1;
//     }
//     for(int i=0; i<arr1.size(); i++) {
//         cout << arr1[i] << " j";
//     }
// return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

int countCall(const vector<char> arr, int i) {
    int j=i, count = 0;
    while(arr[i] == arr[j]) {
        count++;
        j++;
    }
    return count;
}

int main() {
    vector<char> chars = {'a','a','b','b','c','c','c'} ;
    
    int i = 0;
    int ansidx = 0;
    int n = chars.size();
    while(i<n) {
    int j = i+1;
    while(j<n && chars[i] == chars[j]) {
        j++;
    }
    // do case me bahar a skte ho
    // 1. end of vector
    // 2. doesn't match

    chars[ansidx++] = chars[i];
    int count = j-i;
    if(j>1) {
        string cnt = to_string(count);
        for(char ch: cnt) {
            chars[ansidx++] = ch;
        }        
    }
    i=j;
    }
    for(char i:chars) {
        cout << i ;
    }
return 0;
}