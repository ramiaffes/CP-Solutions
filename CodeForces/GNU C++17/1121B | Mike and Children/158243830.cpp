#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
int main()
{
 fast; 
 string s;
 long long int t,n,m;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 map<long long int,long long int>hashing;
 for(long long int i(0);i<n;i++){
  for(long long int j(i+1);j<n;j++){
   hashing[vect[i]+vect[j]]++;}}
 long long int ans=0;
 for(auto v:hashing){
  ans=max(ans,v.second);}
 cout<<(ans)<<endl;
 
    
    
 
    
    
return 0;}