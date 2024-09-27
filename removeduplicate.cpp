//Remove Duplicate From a Sorted Array
//Problem on Arrays
#include<iostream>
using namespace std;
int removeDuplicates(int arr[],int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[i]!=arr[j])
        {
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int main() 
{
int arr[]={12,12,15,15,23,56,77};
int n=sizeof(arr)/sizeof(arr[0]);
int dup=removeDuplicates(arr,n);
for(int i=0;i<dup;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}