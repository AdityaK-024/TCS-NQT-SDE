//To Find the Number is Palindrome or Not
//Problem on Numbers
#include<iostream>
using namespace std;
int Palindrome(int num)
{
    int rev=0;
    int dup=num;
    while(num>0)
    {
        int ld=num%10;
        rev=(rev*10)+ld;
        num=num/10;
    }
    if(dup==rev)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int num;
    cout<<"Enter the Number : ";
    cin>>num;
    int rev=Palindrome(num);
    if(rev){
        cout<<num<<" is a Palindrome";
    }
    else{
        cout<<num<<" is not Palindrome";
    }
}