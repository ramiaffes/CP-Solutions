#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<pair<long long int,long long int>,long long int>dp;
map<pair<long long int,long long int>,bool>vis;
void func(long long int t,long long int d,long long int v1,long long int v2){
 dp[make_pair(v1,t)]=1e9;
 vis[make_pair(v1,t)]=1;
 if((v1==v2)and(t==1)){
  dp[make_pair(v1,t)]=v1;
  return;
  }
 else if(t==1){return;}
 else{
  for(long long int i(0);i<=d;i++){
  if(vis[make_pair(v1-i,t-1)]==0){
   func(t-1,d,v1-i,v2);}
  if(dp[make_pair(v1-i,t-1)]!=1e9){
   if(dp[make_pair(v1,t)]==1e9){dp[make_pair(v1,t)]=dp[make_pair(v1-i,t-1)]+v1;}
  else dp[make_pair(v1,t)]=max(dp[make_pair(v1-i,t-1)]+v1,dp[make_pair(v1,t)]);}
  if(vis[make_pair(v1+i,t-1)]==0){
   func(t-1,d,v1+i,v2);}
if(dp[make_pair(v1+i,t-1)]!=1e9){
 if(dp[make_pair(v1,t)]==1e9){dp[make_pair(v1,t)]=dp[make_pair(v1+i,t-1)]+v1;}
  else dp[make_pair(v1,t)]=max(dp[make_pair(v1+i,t-1)]+v1,dp[make_pair(v1,t)]);}
  }}
 }
int main()
{
 fast;
 long long int v1,v2,t,d;
 cin>>v1>>v2;
 cin>>t>>d;
 func(t,d,v1,v2);
 cout<<dp[make_pair(v1,t)]<<endl;
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}