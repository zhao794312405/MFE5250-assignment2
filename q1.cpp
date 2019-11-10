#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[80];
    char temp;
    cout << "input: ";
    cin.getline(str,80);
    for(int i=0;i<strlen(str)/2;i++)
    {
        temp=str[i];
        str[i]=str[strlen(str)-i-1];
        str[strlen(str)-i-1]=temp;
    }
    cout<<"output: "<<str<<endl;
    return 0;
}