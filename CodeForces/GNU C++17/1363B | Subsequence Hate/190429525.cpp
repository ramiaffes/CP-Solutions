#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
map<long long int,long long int>dp;
const long long M=1000000007;
int main()
{
 fast;
 long long int t;
 string s;
 cin>>t;
 while(t--){
  cin>>s;
  long long int n=s.length();
  vector<long long int>dp(n);
   if(s[0]=='0')dp[0]=1;
  for(long long int i(1);i<n;i++){
   dp[i]=dp[i-1];
   if(s[i]=='0')dp[i]++;}
  vector<long long int>dp1(n);if(s[0]=='1')dp1[0]=1;
  for(long long int i(1);i<n;i++){
   dp1[i]=dp1[i-1];
   if(s[i]=='1')dp1[i]++;}
 vector<long long int>dp2(n);
 if(s[n-1]=='1')dp2[n-1]++;
 for(long long int i(n-2);i>=0;i--){
  dp2[i]=dp2[i+1];
   if(s[i]=='1')dp2[i]++;
  }
vector<long long int>dp3(n);
 if(s[n-1]=='0')dp3[n-1]++;
 for(long long int i(n-2);i>=0;i--){
  dp3[i]=dp3[i+1];
   if(s[i]=='0')dp3[i]++;
  }
 long long int ans=1e9;
 for(long long int i(0);i<(n-1);i++){
  ans=min(ans,dp[i]+dp2[i+1]);}
 for(long long int i(0);i<(n-1);i++){
  ans=min(ans,dp1[i]+dp3[i+1]);} 
  ans=min(ans,dp[n-1]);
  ans=min(ans,dp1[n-1]);
 cout<<ans<<endl;}
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}