//To Count the Number of Vowels,Consonants and Spaces in a String
//Problem on String
#include<iostream>
#include<string>
using namespace std;
int solve(string str,int n)
{
    int vowel=0,consonant=0,space=0;
for(int i=0;i<n;i++)
{
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
      vowel++;
    else if (str[i] >= 'a' && str[i] <= 'z')
      consonant++;
    else if (str[i] == ' ')
      space++;
  }
      cout<<"Number of Vowel is : "<<vowel<<endl;
      cout<<"Number of Consonant is : "<<consonant<<endl;
      cout<<"Number of Space is : "<<space<<endl;
}
int main()
{
    string str;
    getline(cin,str);
    // int n=sizeof(str)/sizeof(str[0]);
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        str[i]=tolower(str[i]);
    }
    solve(str,n);
}