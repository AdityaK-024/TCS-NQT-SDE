// Bubble Sort
// Problems on Sorting
#include <iostream>
using namespace std;
void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if(arr[j]>arr[j+1])
            {
            int temp = arr[j+1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {12, 34, 56, 44, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}