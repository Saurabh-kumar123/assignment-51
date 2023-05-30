/*3. Given an array arr[] of N integer elements, the task is to change the minimum number of
elements of this array such that it contains first N terms of the Catalan Sequence.
Thus, find the minimum changes required using unordered_multiset.
First few Catalan numbers are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …..
Examples:
Input: arr[] = {4, 1, 2, 33, 213, 5}
 Output: 3
  We have to replace 4, 33, 213 with 1, 14, 42
  to make the first 6 terms of Catalan sequence.
  Input: arr[] = {1, 1, 2, 5, 41}
   Output: 1
   Simply change 41 with 14 */

 #include<bits/stdc++.h>
 #define MAX 100000
 #define ll long long int
 using namespace std;
 ll catalan[MAX];
 void catalanDP(ll n)
 {
      catalan[0]=catalan[1]=1;
      for(int i=2;i<=n;i++)
      {
           catalan[i]=0;
           for(int j=0;j<i;j++)
               catalan[i]+=catalan[j]*catalan[i-j-1];

      }
 }
 int CatalanSequence(int ar[],int n)
 {
      catalanDP(n);
      unordered_multiset<int> s;
      int a=1,b=1;
      int c;
      s.insert(a);
      if(n>=2)
          s.insert(b);
      for(int i=2;i<n;i++)
      {
           s.insert(catalan[i]);

      }
      unordered_multiset<int>::iterator it;
      for(int i=0;i<n;i++)
      {
           it=s.find(ar[i]);
      if(it!=s.end())
          s.erase(it);
      }

      return s.size();
 }
 int main()
 {
      int ar[]={4,1,2,33,213,5};
      int n = sizeof(ar)/sizeof(ar[0]);
      cout<<CatalanSequence(ar,n);
      return 0;
 }

