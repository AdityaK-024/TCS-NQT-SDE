//To Find Factorial of a Number
//Problem on Number
#include<iostream>
using namespace std;
int factorial(int num)
{
    if(num==0)
    {
        return 1;
    }
    return num*factorial(num-1);
}
int main() 
{
int num;
cout<<"Enter the Number : ";
cin>>num;
int fact=factorial(num);
cout<<factorial(num)<<endl;
return 0;
}