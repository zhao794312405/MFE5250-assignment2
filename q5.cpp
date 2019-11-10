// Created by 赵文锴 on 2019/11/2.
#include <iostream>
#include <cstdlib>
using namespace std;

int intlen(int array[])
{
    for(int i=0;i<20;i++)
    {
        if(array[i]==0) return i-1;
    }
    return 19;
}

void del(int array[],int n)
{
    for(int i=n;i<19;i++)
    {
        array[i]=array[i+1];
    }
    array[19]=0;
}

int main()
{
    int array[20];
    for(int num=1;num<21;num++)                 //construct array 1~20
    {array[num-1]=num;}



    int label=0;
    for(;intlen(array)>=2;)
    {
        for(int num=0;num<intlen(array)+1;num++)
        {
            if(num==intlen(array)+1) {num=0;}
            if(label==2) {label=0; del(array,num);}
            label++;
            cout<<"array length= "<<intlen(array)+1<<" That is "<<array[num]<<endl;
        }
        cout<<"--The next loop--"<<endl;
    }

    cout<<"The rest numbers are "<<array[0]<<" and "<<array[1];













    return 0;
}

