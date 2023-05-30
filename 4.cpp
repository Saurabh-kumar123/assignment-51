/*4. Write a C++ program to illustrate the swapping of data between two unordered multiset. */
#include<bits/stdc++.h>
using namespace std;
int main()
{
     unordered_multiset<int> un1;
    unordered_multiset<int> un2 ({1,3,2,7,6});
    un1 = {7,2,2,9,8};
    unordered_multiset<int>::iterator it;
    cout<<"first un_multiset  :  ";
    for(it=un1.begin();it!=un1.end();it++)
     cout<<*it<<" ";
    cout<<endl;
    cout<<"second un_multiset  :  ";
    for(it=un2.begin();it!=un2.end();it++)
     cout<<*it<<" ";
     cout<<endl<<"after swaping "<<endl;
     un1.swap(un2);
      cout<<"first un_multiset  :  ";
    for(it=un1.begin();it!=un1.end();it++)
     cout<<*it<<" ";
    cout<<endl;
    cout<<"second un_multiset  :  ";
    for(it=un2.begin();it!=un2.end();it++)
     cout<<*it<<" ";
     return 0;
}
