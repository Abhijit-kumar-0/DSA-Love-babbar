#include <iostream>
using namespace std;

int painterAllocate(int arr[], int n, int m);
bool isPossible(int arr[], int m, int n, int mid);
int main()
{
    int arr[4] = {5, 5, 5, 5};
    int painter = 2;
    int poster = 4;
    cout << "Ans: " << painterAllocate(arr, painter, poster);
    return 0;
}
int painterAllocate(int arr[], int n, int m)
{
    int s = 0;
    int sum;
    for (int i = 0; i <= m; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

bool isPossible(int arr[], int n, int m, int mid)
{
    int painterCount = 1;
    int posterSum = 0;
    for (int j = 0; j < n; j++)
    {
        if (posterSum + arr[j] <= mid)
        {
           posterSum += arr[j];
        }
        else
        {
            painterCount++;
            if (painterCount <= n || arr[j] <= mid)
            {
                return false;
            }
            posterSum = arr[j];
        }
    }
    return true;
}