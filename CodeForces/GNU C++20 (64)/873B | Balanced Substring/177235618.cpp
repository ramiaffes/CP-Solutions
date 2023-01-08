#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast;
 long long int n,m,t,e;
 string s;
 cin>>n;
 cin>>s;
 vector<pair<long long int,long long int>>dp(n);
 if(s[0]=='0'){
  dp[0].first++;}
 else{
  dp[0].second++;}
 for(int i=1;i<s.length();i++){
  dp[i]=dp[i-1];
 if(s[i]=='0'){
  dp[i].first++;}
 else{
  dp[i].second++;}}
map<long long int,bool>vis1;
map<long long int,bool>vis2;
long long int ans=0;
map<long long int,long long int>hashing1;
map<long long int,long long int>hashing2;
for(long long int i(0);i<n;i++){
 if(dp[i].first>dp[i].second){
  if(vis1[dp[i].first-dp[i].second]==1){
   ans=max(ans,i-hashing1[dp[i].first-dp[i].second]);}
  if(vis1[dp[i].first-dp[i].second]==0)
  hashing1[dp[i].first-dp[i].second]=i;
  vis1[dp[i].first-dp[i].second]=1;
  }
 else if(dp[i].first<dp[i].second){
  if(vis2[dp[i].second-dp[i].first]==1){
   ans=max(ans,i-hashing2[dp[i].second-dp[i].first]);}
  if(vis2[abs(dp[i].first-dp[i].second)]==0)
  hashing2[abs(dp[i].first-dp[i].second)]=i;
  vis2[abs(dp[i].first-dp[i].second)]=1;
  }
 else{
  ans=max(ans,i+1);}}
cout<<ans<<endl;
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}