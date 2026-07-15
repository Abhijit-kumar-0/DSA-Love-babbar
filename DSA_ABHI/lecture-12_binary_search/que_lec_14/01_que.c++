// find the pivot in an array.
#include <iostream>
using namespace std;

int getpivot(int arr[], int n);
int main()
{
    int arr[5] = {3, 8, 10, 1, 17};
    cout << "Pivot is " << getpivot(arr, 5);
    return 0;
}
int getpivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}; 