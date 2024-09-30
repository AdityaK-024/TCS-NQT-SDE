//To Find Second Largest and Smallest ELement of array
//Problems on Array
#include<iostream>
using namespace std;
int SecondSmallest(int arr[],int n)
{
    int small=INT8_MAX;
    int Secsmall=INT8_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            Secsmall=small;
            small=arr[i];
        }
        else if(arr[i]<Secsmall && arr[i]!=small)
        {
            Secsmall=arr[i];
        }
    }
    return Secsmall;
}
int SecondLargest(int arr[],int n)
{
    int large=INT8_MIN;
    int Seclarge=INT8_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            Seclarge=large;
            large=arr[i];
        }
        else if(arr[i]>Seclarge && arr[i]!=large)
        {
            Seclarge=arr[i];
        }
    }
    return Seclarge;
}
int main() 
{
int arr[]={36,25,16,9,4,1};
int n=sizeof(arr)/sizeof(arr[0]);
int SecSmall=SecondSmallest(arr,n);
int SecLarge=SecondLargest(arr,n);
cout<<"Second Smallest Element is "<<SecSmall<<endl;
cout<<"Second Largest Element is "<<SecLarge;
return 0;
}