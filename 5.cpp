/*5. Write a C++ program to count the frequency of elements in unordered_multiset. */
#include<bits/stdc++.h>
using namespace std;

int main()
{
     unordered_multiset<int> sampleset;
     sampleset.insert(5);
     sampleset.insert(10);
     sampleset.insert(15);
     sampleset.insert(20);
     sampleset.insert(20);
     sampleset.insert(25);
     cout<<endl<<"sampleSet contains : ";
     for(auto it = sampleset.begin();it!=sampleset.end();it++)
     {
          cout<< *it <<" -> "<<sampleset.count(*it)<<endl;
     }
     cout<<endl;
     /*if(sampleset.count(20)==2)
          cout<<"Element 20 present in this set"<<endl;
     else
          cout<<"Element 20 is not present in this set"<<endl;*/
     cout<<endl;
     return 0;
}


