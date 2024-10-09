// To Reverse a Number
// Problem on Numbers
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int rev=0;
    int n=num;
    while(n!=0)
    {
        int ld=n%10;
        rev=rev*10+ld;
        n/=10;
    }
    cout<<"Reverse of "<<num<<" is "<<rev;

    return 0;
}