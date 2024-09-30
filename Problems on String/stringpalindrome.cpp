//To Find if a String is Palindrome or Not
//Problem on String
#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string str)
{
    int start=0;
    int end=str.length()-1;
    while(start<end)
    {
    if(str[start]!=str[end])
    {
        return false;
    }
    start++;
    end--;
    }
    return true;
}
int main()
{
    string str;
    cin>>str;
    if(isPalindrome(str))
    {
        cout<<str<<" is Palindrome";
    }
    else
    {
        cout<<str<<" is not a Palindrome";
    }
}