#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int n,t;
 cin>>t;
 while(t--){
  cin>>n;
  set<long long int>s;
  s.insert(0);
  for(long long int i(1);i<=sqrt(n);i++){
  s.insert(n/i);
  s.insert(i);}
  cout<<(s.size())<<endl;
  for(auto it=s.begin();it!=s.end();it++){
   cout<<(*it)<<" ";}
  cout<<endl;
  
  }
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}