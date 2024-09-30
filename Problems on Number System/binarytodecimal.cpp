//To Convert Binary to Decimal
//Problem on Number System
#include<iostream>
#include<string>
using namespace std;
int main() 
{
string str;
cout<<"Enter the Binary Number : ";
getline(cin,str);
int n=str.length();
int base=1;
int ans=0;
for(int i=n-1;i>=0;i--)
{
    if(str[i]=='1')
    {
        ans+=base;
    }
    base*=2;
}
cout<<"The Decimal Number is : " <<ans;
return 0;
}