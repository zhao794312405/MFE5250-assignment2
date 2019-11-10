// Created by 赵文锴 on 2019/11/1.

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
bool canJump(int A[], int n);

int main()
{
    int i=0,start=0,num=0;
    vector<int> array;
    cout<<"input:";
    while(cin>>num)
    {
        array.push_back(num);
        if (cin.get() == '\n') break;
    }                                                   //input numbers as an array
    i=array.size();

    int maxCover=0;
    bool result=false;
    for(start=0;start<i&&start<=maxCover;start++)
    {
        if (array[start] + start > maxCover)
            maxCover = array[start] + start;
        if (maxCover >= i - 1)
            result = true;
    }





    if(result) cout<<"Output: true"<<endl;
    else cout<<"Output: false"<<endl;

    return 0;
}


bool canJump(int A[], int n){
    int maxCover = 0;
    for(int start = 0; start<=maxCover && start<n;start++){
        if(A[start]+start > maxCover)
            maxCover = A[start]+start;
        if(maxCover >=n-1)
            return true;
    }
    return false;
}

