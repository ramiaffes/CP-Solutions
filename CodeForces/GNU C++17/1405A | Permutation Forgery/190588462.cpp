#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast;
 int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  vector<int> p(n);
  for (int i(0);i<n;++i){
   cin>>p[i];
   } 
  reverse( p.begin(), p.end());
  for (int i(0);i<n;++i){
   cout<<p[i]<<" ";}
   cout<<"\n";
  }
 
  
  
  
   
 
 
 
 
 
 return 0;
}