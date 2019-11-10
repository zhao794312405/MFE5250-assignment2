// Created by 赵文锴 on 2019/11/9.
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    string j;
    string s;
    string output;
    string output1;
    cout<<"input J as Jewel: ";
    getline(cin,j);
    cout<<"input S as Stone: ";
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(j.find_first_of(s[i])!= string::npos)
            output1+=s[i];
    }
    cout<<"stones who are jewels: "<<output1<<endl<<"the number is: "<<output1.length()<<endl;
    return 0;
}

