/*8. Write a C++ program to illustrate the bucket_count() function in unordered_multiset.  */
#include<bits/stdc++.h>
using namespace std;
int main()
{
     unordered_multiset<char> sample;
     sample.insert('a');
     sample.insert('b');
     sample.insert('b');
     sample.insert('b');
     sample.insert('z');
     //sample.insert('z');
     cout<<"The total count of bucket : "<<sample.bucket_count();
     for(int i=0;i<sample.bucket_count();i++)
     {
          cout<<"\nBucket "<<i<<" : ";
          if(sample.bucket_size(i)==0)
               cout<<"empty";
          for(auto it = sample.cbegin(i);it!=sample.cend(i);it++)
               cout<< *it <<" ";
     }

     return 0;
}
