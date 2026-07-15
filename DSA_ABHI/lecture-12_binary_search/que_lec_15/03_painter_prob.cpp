#include <iostream>
using namespace std;

bool isPossible(int arr[], int mid, int k, int n)
{
    int painterCount = 1;
    int boardSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (boardSum + arr[i] <= mid)
        {
            boardSum += arr[i];
        }
        else
        {
            painterCount++;
            if (arr[i] <= mid || painterCount <= k)
            {
                return false;
            }
            boardSum = arr[i];
        }
    }
    return true;
}
int main()
{
    int arr[4] = {5, 5, 5, 5};
    int n = 4; // no of board to paint
    int k = 2; // no of painter
    int s = 0; // s = start
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum; // e = end
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (isPossible(arr, mid, k, n))
        {
            ans = mid;
            cout << "mid = " << mid <<endl;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
            cout << " s " << s << endl;
        }
        mid = s + (e - s) / 2;
    }
    cout << "Ans: " << ans;
    return 0;
}