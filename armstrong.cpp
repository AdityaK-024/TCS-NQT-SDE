//To Check Whether a Number is Armstrong or Not
//Problem on Numbers
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int ld;
    int sum=0;
    int n=num;
    while(num>0)
    {
        ld=num%10;
        sum=sum+(ld*ld*ld);
        num=num/10;
    }
    if(sum=n){
        cout<<"YES ";
    }
    else
    {
        cout<<" NO ";
    }
}