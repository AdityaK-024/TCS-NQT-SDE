// To Find Repating Element
// Problems on Array
#include<iostream>
using namespace std;
void findRepeatingElement(int arr[],int n)
{
    int count=0;
    int dup[n];
    for (int i = 0; i < n-1; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            dup[count++]=arr[i];
        }
    }
    cout<<"The Repating Elemnts are: ";
    for(int i=0;i<count;i++)
    {
        if(dup[i]!=dup[i+1])
        cout<<dup[i]<<" ";
    }
    
}
int main() 
{
int arr[]={12,12,23,2,23,5,6,6};
int n = sizeof(arr)/sizeof(arr[0]);
findRepeatingElement(arr,n);
return 0;
}