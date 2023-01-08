#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast;
 long long int n,m,t;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 vector<long long int>vect1(n);
 for(long long int i(0);i<n;i++){
  vect1[i]=vect[i]-i;}
map<long long int,long long int>hashing;
for(long long int i(0);i<n;i++){
 hashing[vect1[i]]+=vect[i];}
long long int ans=0;
for(auto v:hashing){
 ans=max(ans,v.second);}
cout<<ans<<endl;
 
 
  
  
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}