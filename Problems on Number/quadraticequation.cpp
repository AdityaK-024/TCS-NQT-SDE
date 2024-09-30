// Program to Find roots of a Quadratic Equations
// Problems on Numbers
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    float disc = (b*b-4*a*c);
    float x1=(-b+sqrt(disc))/(2*a);
    float x2=(-b-sqrt(disc))/(2*a);
    cout<<"Roots of a Quadratic Equations is "<<x1<<" and "<<x2;
return 0;    
}