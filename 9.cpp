/*9. Write a C++ program to illustrate the load_factor() function in unordered_multiset. */
#include<bits/stdc++.h>
using namespace std;
int main()
{
     unordered_multiset<char> sample;
     sample.insert('a');
     sample.insert('b');
     cout<<"The size is : "<<sample.size();
     cout<<endl<<"The bucket_count is : "<<sample.bucket_count();
     cout<<endl<<"The load_factor is : "<<sample.load_factor();
      sample.insert('b');
       sample.insert('b');
       cout<<"\n\nThe size is : "<<sample.size();
     cout<<endl<<"The bucket_count is : "<<sample.bucket_count();
     cout<<endl<<"The load_factor is : "<<sample.load_factor()<<endl;
         sample.insert('z');
         cout<<"\nThe size is : "<<sample.size();
     cout<<endl<<"The bucket_count is : "<<sample.bucket_count();
     cout<<endl<<"The load_factor is : "<<sample.load_factor()<<endl;
     return 0;
}
