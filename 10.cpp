/*10.Write a C++ program to illustrate the reverse() function in unordered_multiset.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
     unordered_multiset<int> sample;
     sample.reserve(16);
     sample.insert(16);
     sample.insert(5);
     sample.insert(6);
     sample.insert(7);
     sample.insert(4);
     sample.insert(2);
     sample.insert(1);
     cout<<"The values in unordered_multiset : ";
     for(const int  x : sample)
          cout<< " "<<x;

     return 0;
}
