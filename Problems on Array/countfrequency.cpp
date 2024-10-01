// Count Frequency of Each Element in the Array
#include<iostream>
using namespace std;
void frequency_count(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
            count++;
            arr[j]=-1;
            }
        }
           if(arr[i]!=-1)
            {
                cout<<arr[i]<<" Occurs "<<count<<" times "<<endl;
            }
    }

}
int main() 
{
int arr[]={11,12,22,32,22,12,11};
int n=sizeof(arr)/sizeof(arr[0]);
frequency_count(arr,n);
return 0;
}