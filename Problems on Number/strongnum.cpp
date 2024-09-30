// Check if a Number is Strong or Not
// Problem on Numbers
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n<=1)
    return 1;
    return n*fact(n-1);
}
int main() 
{
int num;
cin>>num;
int n=num;
int sum=0;
while(n!=0)
{
    int ld=n%10;
    sum+=fact(ld);
    n/=10;
}
if(sum==num)
{
    cout<<"Strong Number";
}
else{
    cout<<"Not a Strong Number";
}
return 0;
}