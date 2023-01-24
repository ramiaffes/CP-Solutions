#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
map<string,long long int>hashing1;
int main()
{
 fast;
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 vector<long long int>dp(n);
  vector<long long int>dp1(n);
 dp[0]=1;
 long long int val=0;
 dp1[val]=1;
 for(long long int i(1);i<(n);i++){
  dp[i]=dp[i-1];
  if(vect[i]>vect[i-1]){
   dp[i]++;
   dp1[val]++;
   }
   else if(vect[i]<=vect[i-1]){
    dp[i]=1;
    val=i;
    dp1[val]=1;
    }}
 long long int ans=0;
 for(long long int i(0);i<n;i++){
  ans=max(ans,dp[i]);}
 for(long long int i(1);i<(n-1);i++){
  if(dp[i]==1){
   if(vect[i+1]>vect[i-1]){
    ans=max(ans,dp1[i]-1+dp[i-1]);}
   }}
 for(long long int i(2);i<(n);i++){
  if(dp[i]==1){
   if(vect[i]>vect[i-2]){
    ans=max(ans,dp1[i]+dp[i-2]);}
   }}
  cout<<ans<<endl;
   
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}