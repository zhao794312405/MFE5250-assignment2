#include <iostream>
#include <cstring>
#include <algorithm>


using namespace std;

void reverse2(string &str) {
    char temp;
    for (int i = 0; i < str.length() / 2; i++) {
        temp = str[i];
        str[i] = str[str.length() - i - 1];
        str[str.length() - i - 1] = temp;
    }
    //cout << "reference_output: " << str << endl;               //test
}

string substring(string str, int begin,int end)
{
    string ch;
    int j=0;
    for(int i=begin;i<end;i++) {ch+=str[i];j++;}
    ch+=" ";
return ch;
}

int main()
{
    string str;
    string t;
    string str2;
    cout << "input: ";
    getline(cin,str);
    int end =  0;
    int begin =  0;
    while (str[begin] != '\0')
    {
        if (str[begin] == ' ')
        {
            begin++;
            end++;
        }
        else if (str[end] == ' ' || str[end] == '\0')
        {
            t=substring(str,begin,end);                             //another substring
            reverse2(t);
            //cout<<t<<endl;
            str2+=t;                                                //another string run slowly
            begin = end++;
        }
        else
            end++;
    }
    cout<<"output: "<<str2<<endl;
    return 0;
}
