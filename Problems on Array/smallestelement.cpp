//To Find the Smallest Element in an Array
//Problem on Array
#include<iostream>
using namespace std;
int SmallestElement(int arr[],int n)
{
    // int min=arr[0];
    int min = INT8_MAX;
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[]={20,12,25,46,5,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min = SmallestElement(arr,n);
    cout<<"The Smallest Element of Array is "<<min<<endl;
}