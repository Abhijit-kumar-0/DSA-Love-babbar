#include<iostream>
#include<string>
using namespace std;

int checkEqual(int arr1[], int arr2[]) {
    int i=0;
    while(i<26) {
        if(arr1[i]!=arr2[i]){
            return 0;
        }
        i++;
    }
    return 1;
}

int main() {
    string s1 = "ambaoo";
    string s2 = "za";

    int arr1[26] = {0};
    // count how many alphabet occ in s2
    for(int i = 0; i < s2.length(); i++) {
        int index = s2[i] - 'a';
        arr1[index]++;
    }

    // window bnavo 
    int windowSize = s2.length();
    int i = 0;
    int arr2[26] = {0};
    while(i<windowSize ) {
        int index = s1[i] - 'a';
        arr2[index]++;
        i++;
    } 

    if(checkEqual(arr1, arr2)) {
        cout << "true";
        return 0;
    }

    //aage window process karo
    while(i<s1.length()) {
        int index = s1[i] - 'a';
        arr2[index]++;   
        // previous char reset 
        int oldidx = s1[i-windowSize] - 'a';
        arr2[oldidx] = 0;
        i++;

        if(checkEqual(arr1, arr2)) {
            cout << "true";
            return 0;
        }
    }
    cout << "false";

    return 0;
}