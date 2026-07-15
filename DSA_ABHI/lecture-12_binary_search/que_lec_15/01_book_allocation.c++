#include<iostream>
using namespace std;

int bookAllocate(int arr[],int n,int m);
bool isPossible(int arr[],int n,int m,int mid);
int main(){
    int arr[4] = {40,50,90,100};
    int student = 2;
    int book = 4;
    cout << "Ans: " << bookAllocate(arr,student,book);
    return 0;
}
int bookAllocate(int arr[],int n,int m)
{
    int s = 0;
    int sum;
    int  e = sum;
    int ans = -1;
    for(int i=0; i<=m; i++) {
        sum += arr[i];
    }
    int mid = s + (e - s)/2;
    while(s<=e) 
    {
        if(isPossible(arr,n,m,mid)) { // To check possible solution true or false;
            ans = mid;
            e = mid - 1;  // bec'z right part have sol exist but we have required minimum solution
        }
        else              // sol not exist go to right part
        {
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}
bool isPossible(int arr[],int n,int m,int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0; i<=n; i++) {
        if( pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if( studentCount <= m || arr[i] <= mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}