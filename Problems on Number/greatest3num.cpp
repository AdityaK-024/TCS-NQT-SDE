// Greatest of 3 Numbers
// Problem on Numbers
#include<iostream>
using namespace std;
int main() 
{
int num1,num2,num3;
cin>>num1>>num2>>num3;
if(num1>num2 && num1>3)
{
    cout<<num1<<" is Greatest";
}
else if(num2>num3 && num2>num1)
{
    cout<<num2 <<" is Greatest";
}
else
{
    cout<<num3<<" is Greatest";
}
return 0;
}