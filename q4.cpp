#include <iostream>
#include <cstring>
using namespace std;

void reverse1(char *str)
{
    char temp;
    for(int i=0;i<strlen(str)/2;i++)
    {
        temp=str[i];
        str[i]=str[strlen(str)-i-1];
        str[strlen(str)-i-1]=temp;
    }
    cout<<"pointer_output: "<<str<<endl;
}

void reverse2(string &str)
{
    char temp;
    for(int i=0;i<str.length()/2;i++)
    {
        temp=str[i];
        str[i]=str[str.length()-i-1];
        str[str.length()-i-1]=temp;
    }
    cout<<"reference_output: "<<str<<endl;
}

int main()
{
    char str[]="I Love CUHKSZ";
    string str2="I Love CUHKSZ";
    reverse1(str);
    reverse2(str2);
    return 0;
}