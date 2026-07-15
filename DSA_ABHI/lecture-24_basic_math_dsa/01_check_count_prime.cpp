// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     bool isprime(int n) {
//         if(n<1) {
//             return false;
//         }
//         for(int i=2; i<n; i++) {
//             if(n%i==0) {
//                 return false;
//             }
//         }
//         return true;
//     }

// };


// int main(){
//     Solution obj;
//     int n;
//     int count = 0;
//     cout << "Enter number:\n";
//     cin >> n;
//     bool value;
//     for(int i=2; i<n; i++) {
//         if(obj.isprime(i)) {
//             count++;
//         }
//         }
//     cout << count;
// return 0;
// }

// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
// vector<int> v = {1,2,3,4,5,6,7,8,9,10};
// int n = v.size();
// int count = 0;
// vector<int> newv(n+1, true);
// newv[0] = newv[1] = false;

// for(int i=2; i<n; i++) {
//     if(newv[i]==true) {
//         count++;

//         for(int j=2*i; j<n; j=j+i) {
//             newv[j]==false;
//         }
//     }
// }

// cout << count << endl;
// return 0;
// }


// using sieve of eratostheses
 #include<iostream>
 #include<vector>
 using namespace std;

 int main() {
    int num;
    cin >> num;

    vector<int> prime(num+1, true);

    int cnt = 0;

    prime[0] = prime[1] = false;
    for(int i=2; i<num; i++) {
        if(prime[i]) {
            cnt++;
            for(int j=i*i; j<num; j+=i) {
                prime[j] = false;
            }
        }
    }
    cout << cnt << " ";
    return 0;
 }

//  optimize method for any split subpart
// use segmented of sieve