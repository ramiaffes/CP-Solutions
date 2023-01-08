#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 long long int n,s,t;
 cin>>t;
 while(t--){
  cin>>n>>s;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++)cin>>vect[i];
  vector<long long int>dp(n);
  dp[0]=vect[0];
  for(long long int i(1);i<n;i++){
   dp[i]=dp[i-1];
   dp[i]+=vect[i];}
 map<long long int,long long int>hashing;
 for(long long int i(0);i<n;i++){
  auto it=upper_bound(dp.begin(),dp.begin()+i+1,s);
  if((it-dp.begin())<i){hashing[i]=(it-dp.begin()-1);break;}
  long long int val=0;
   it=upper_bound(dp.begin(),dp.end(),s+vect[i]);
  val+=it-dp.begin()-1;
  hashing[i]=val-1;
  
  }
 long long int ans=0;
 long long int val1=0;
 for(auto v:hashing){ans=max(ans,v.second);}
 auto it=upper_bound(dp.begin(),dp.end(),s);
  val1+=it-dp.begin()-1;
 if(val1>=ans){cout<<0<<endl;}
 else{
 long long int val=0;
 for(auto v:hashing){
  if(ans==v.second){val=v.first+1;break;}}
 cout<<val<<endl;
}
  }
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}