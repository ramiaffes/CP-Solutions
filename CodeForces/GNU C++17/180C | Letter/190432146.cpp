#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<char,long long int>hashing;
 
int main()
{
 fast;
 
 string s;
 string t;
 cin>>s;
 long long int n=s.length();
 vector<long long int>dp(n);
 if(!isupper(s[0])){
  dp[0]=1;}
 for(long long int i(1);i<n;i++){
  dp[i]=dp[i-1];
  if(!isupper(s[i])){
   dp[i]++;}
  }
vector<long long int>dp1(n);
if(isupper(s[n-1])){
  dp1[n-1]=1;}
for(long long int i(n-2);i>=0;i--){
 dp1[i]=dp1[i+1];
 if(isupper(s[i])){
  dp1[i]++;}}
if((dp[n-1]==0)or(dp1[0]==0)){
 cout<<0<<endl;}
else{
long long int ans=1e6;
for(long long int i(0);i<(n-1);i++){
 ans=min(ans,dp[i]+dp1[i+1]);}
ans=min(ans,dp1[0]);
ans=min(ans,dp[n-1]);
cout<<ans<<endl;}
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}