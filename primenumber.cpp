//To Check Whether Prime Or Not
//Problem on Numbers
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
    bool is_prime=true;
    cout<<"Enter a Number : ";
    cin>>num;
    if(num<=1)
    {
        is_prime=false;
    }
    for(int i=2;i<sqrt(num);i++)
    {
        if(num%i==0)
        {
            is_prime=false;
            break;
        }
    }
    if(is_prime)
    {
        cout<<num<<" is a Prime Number";
    }
    else
    {
        cout<<num<<" is not a Prime Number";
    }

}