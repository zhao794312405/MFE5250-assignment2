// Created by 赵文锴 on 2019/11/1.
#include <iostream>
using namespace std;

int main()
{
    vector<int> array;
    cout<<"input:";
    while(cin>>num)
    {
        array.push_back(num);
        if (cin.get() == '\n') break;
    }       //input numbers as an array
    length=array.size()-1;
    int min=array[0];
    for (int i=0;i<length;i++)
    {
        if(min>array[i]) min=array[i];
    }
    cout<<min;

}
