/*2. Write a C++ program to delete all copies from an unordered multiset .
 Example:
 Input - 6 4 2 7 3 3 1 1 1
 Output - 6 4 2 7 3 1  */
#include<bits/stdc++.h>
using namespace std;
void uniqueUn(int arr[],int n)
{
     unordered_multiset<int> un1,un2;
     unordered_multiset<int>::iterator it;
     for(int i=0;i<n;i++)
     {
          if(un1.find(arr[i])==un1.end())
               un1.insert(arr[i]);
     }
   cout<<endl;
     for(it=un1.begin();it!=un1.end();it++)
          cout<<*it<<" ";
}
int main()
{
     int arr[]={6,4,2,7,3,3,1,1,1};
     int n = sizeof(arr)/sizeof(arr[0]);
      for(int i=0;i<n;i++)
          cout<<arr[i]<<" ";
     uniqueUn(arr,n);

     return 0;
}

