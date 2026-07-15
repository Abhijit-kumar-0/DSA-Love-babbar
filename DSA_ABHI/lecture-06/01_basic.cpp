 // convert decimal into binary
 #include<iostream> 
 #include<math.h>

 using namespace std;

 int main() {
    int n;
    cout << "Enter number:" << endl;
    cin >> n;
    int bit, i=0;
    int ans=0;

    while(n!=0) {

        bit = (n&1);
        cout << bit;
        ans = (bit * pow(10,i)) + ans;
        n = n >> 1;
        i++;
    // cout << endl << ans;
    }
}