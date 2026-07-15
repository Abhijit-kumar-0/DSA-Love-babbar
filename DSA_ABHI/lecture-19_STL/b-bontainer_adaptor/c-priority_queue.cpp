#include<iostream>
#include<queue>
using namespace std;

int main(){
// max heap
priority_queue<int> maxi;
// min heap
priority_queue<int,vector<int>, greater<int> > mini;

maxi.push(2);
maxi.push(0);
maxi.push(3);
maxi.push(1);
maxi.push(5);

int n = maxi.size();
for(int i=0; i<n; i++) {
    cout << maxi.top() << " ";
    maxi.pop();
}
cout << "\nafter pop size of maxi -> " << maxi.size() << endl;

mini.push(2);
mini.push(0);
mini.push(3);
mini.push(1);
mini.push(5);

for(int i=0; i<n; i++) {
    cout << mini.top() << " ";
    mini.pop();
}
return 0;
}