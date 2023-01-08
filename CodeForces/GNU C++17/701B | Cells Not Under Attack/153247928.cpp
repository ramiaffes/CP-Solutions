#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast;
 
 long long int n,m,x,y; 
 cin>>n>>m;
 set<long long int>res1;
 set<long long int>res2;
 for(long long int i(0);i<m;i++){
  cin>>x>>y;
  res1.insert(x);
  res2.insert(y);
 cout<<((n-res1.size())*(n-res2.size()))<<endl;
  
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}