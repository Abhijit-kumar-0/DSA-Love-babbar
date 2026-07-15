#include <iostream>
using namespace std;

long long int squareroot(int n);
double moreprecise(int n, int precision, int tempsol);

int main()
{
    int n;
    cout << "Enter a number to find its square root: ";
    cin >> n;

    int tempsol = squareroot(n);
    cout << "square root of " << n << " is: " << moreprecise(n, 3, tempsol);
    return 0;
    }
// int square root find.
long long int squareroot(int n)
{
    int start = 0;
    int end = n;
    long long int mid = start + (end - start) / 2;
    
    long long int ans = -1;
    while (start <= end)
    {
        long long int sqr = mid * mid;
        if (sqr == n)
            return mid;
            
            if (sqr < n){
            ans = mid;
            start = mid + 1;
        }
        else // (sqr > n)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
double moreprecise(int n, int precision, int tempsol){

    double factor = 1;
    double ans = tempsol;

    for(int i=0; i<precision; i++){
        factor = factor/10;

        for(double j=ans; j*j<n; j = j+factor){
            ans = j;
        }
    }
    return ans;
}