//To Find the Largest Element in an Array
//Problem on Array
#include<iostream>
#include<iostream>
using namespace std;
int LargestElement(int arr[],int n)
{
    int max=INT8_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[]={24,56,7,98,1,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = LargestElement(arr,n);
    cout<<"The Largest Element of Array is "<<max<<endl;
}