/* 1. Write a C++ program to initialise the unordered multiset and print it on the screen. */
#include<bits/stdc++.h>
using namespace std;
typedef unordered_multiset<int>:: iterator umit;
void printun(unordered_multiset<int> un)
{
    umit it = un.begin();
    for(;it!=un.end();it++)
    cout<<*it<<" ";
}
int main()
{
    unordered_multiset<int> un1;
    unordered_multiset<int> un2 ({1,3,2,7,6});
    un1 = {7,2,2,9,8};
    if(un1.empty())
    cout<<"unordered multiset 1 is empty "<<endl<<endl;
    else
    cout<<"unordered multiset 1 is not empty"<<endl<<endl;
    if(un2.empty())
    cout<<"unordered multiset 2 is empty"<<endl<<endl;
    else
    cout<<"unordered multiset 2 is not empty"<<endl<<endl;
    cout<<"print unordered multiset 1 is  :  ";
    printun(un1);
    cout<<endl<<endl;
    cout<<"print unordered multiset 2 is  :  ";
    printun(un2);
    cout<<endl;

   return 0;
}

