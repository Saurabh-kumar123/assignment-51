/*7. Write a C++ program to illustrate the find() function in unordered_multiset.*/
#include<bits/stdc++.h>
using namespace std;
void printset(int arr[],int n)
{
     unordered_multiset<int> mp;
     for(int i=0;i<n;i++)
     {
          if(mp.find(arr[i])==mp.end())
               mp.insert(arr[i]);
     }
     for(auto it = mp.begin();it != mp.end();it++)
          cout<<*it<<" ";
}
int main()
{
     int arr[]={5,4,21,4,1,4,7,89,2,1};
     int n = sizeof(arr)/sizeof(arr[0]);
     printset(arr,n);
     return 0;
}
