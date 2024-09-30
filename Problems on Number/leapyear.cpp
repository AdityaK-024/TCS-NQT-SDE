//check if Given Year is Leap year or Not
//Problem on Numbers
#include<iostream>
using namespace std;
bool leap_year(int year)
{
    if(year%400==0)
    {
        return true;
    }
    else if(year%100==0)
    {
        return false;
    }
    else if(year%4==0)
    {
        return true;
    }
    else{
        return false;
    }
}
int main() 
{
int year;
cout<<"Enter Year to Check : ";
cin>>year;
if(leap_year(year))
{
    cout<<year<<" is a Leap Year"<<endl;
}
else{
    cout<<year<<" is not a leap Year "<<endl;
}
return 0;
}