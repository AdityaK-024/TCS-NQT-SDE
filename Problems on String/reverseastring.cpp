//Reverse A String
//Problem of Strings
#include<iostream>
#include<string>
using namespace std;
void swap(string &s,int i,int j)
{
    char temp=s[i];
    s[i]=s[j];
    s[j]=temp;
}
void reverseString(string &s)
{
    int i=0;
    int j=s.length()-1;
    while(i<j)
    {
        swap(s,i,j);
        i++;
        j--;
    }
}
int main() 
{
string str;
cout<<"Enter a String : ";
getline(cin,str);
reverseString(str);
cout<<"String after Reversing is : "<<str;
return 0;
}