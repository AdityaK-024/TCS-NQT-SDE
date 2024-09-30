//For Reversing an Array
//Problems on Array
#include<iostream>
using namespace std;
int ReverseArray(int arr[],int n)
{
    int p1=0,p2=n-1;
    while(p1<p2)
    {
        int temp=arr[p1];
        arr[p1]=arr[p2];
        arr[p2]=temp;
        p1++;
        p2--;
    }
}
int main() 
{
int arr[]={10,12,23,23,76,8};
int n=sizeof(arr)/sizeof(arr[0]);
int rev=ReverseArray(arr,n);
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}