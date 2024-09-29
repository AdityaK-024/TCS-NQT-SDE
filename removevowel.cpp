//Remove all Vowel From the String
//Problem on String
#include<iostream>
#include<string>
using namespace std;

string removeVowels(string str, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            str = str.substr(0, i) + str.substr(i + 1);
            i--;
            n--;
        }
    }
    return str;
}

int main()
{
    string str;
    cout<<"Enter a String : ";
    getline(cin, str);
    int n = str.length();  
    string Novowel = removeVowels(str, n);
    cout << "String Without Vowels : " << Novowel; 
    return 0;
}

