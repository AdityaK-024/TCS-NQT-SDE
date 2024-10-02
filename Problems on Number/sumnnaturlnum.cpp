// Sum of N Natural Numbers
// Problem on Numbers
#include<iostream>
using namespace std;
int sumNatural(int num)
{
    int sum=0;
    for(int i=1;i<=num;i++)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int num;
    cin>>num;
    cout<<"The Sum of the First "<<num<<" numbers is: "<<sumNatural(num)<<endl;
}