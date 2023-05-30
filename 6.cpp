/*6. Write a C++ program to illustrate the emplace() function in unordered_multiset. */
#include<bits/stdc++.h>
using namespace std;
int main()
{
     unordered_multiset<int> sample;
     sample.insert(11);
     sample.insert(11);
     sample.insert(11);
     sample.insert(12);
     sample.insert(13);
     sample.insert(12);
     sample.insert(13);
     sample.insert(14);
     cout<<endl<<"Element : ";
     for(auto it = sample.begin();it!=sample.end();it++)
          cout<<*it<<" ";
     return 0;
}
