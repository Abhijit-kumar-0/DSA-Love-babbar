#include<iostream> 
using namespace std;

// void swap(arr[], arr[], )

int main(){
int arr[9] = {29,72,98,13,87,66,52,51,36};
int n = 9;
int temp;

for(int i=0; i<n-1; i++)
{
    int minIndex = i;

    for(int j = i+1; j<n; j++) 
    {
        if(arr[j] < arr[minIndex])
        {
            minIndex = j;
        }
    }
    swap(arr[i], arr[minIndex]);
    // temp = arr[i];
    // arr[i] = arr[minIndex];
    // arr[minIndex] = temp;
}

cout << "sorted array = ";
for(int i=0; i<n; i++)
{
    cout << arr[i] << " ";
}
return 0;
}