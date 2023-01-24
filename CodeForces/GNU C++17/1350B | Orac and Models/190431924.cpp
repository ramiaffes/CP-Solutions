#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int ans=1e4;
int main()
{
 fast;
 
 long long int n,x,t;
 cin>>t;
 while(t--){
 cin>>n;
 vector<long long int>s(n);
 for(long long int i(0);i<n;i++){
  cin>>s[i];}
vector<long long int>dp(n+1);
dp[1]=1;
for(long long int i(2);i<(n+1);i++){
 if(s[i-1]>s[0])
 dp[i]=2;
 else dp[i]=1;}
for(long long int i(2);i<=n;i++){
 long long int j=2;
 for(;(j*j)<i;j++){
  if(i%j==0){
  if(s[i/j-1]<s[i-1])dp[i]=max(dp[i],dp[i/j]+1);
  if(s[j-1]<s[i-1])dp[i]=max(dp[i],dp[j]+1);}}
 if(j*j==i){if(s[j-1]<s[i-1])dp[i]=max(dp[i],dp[j]+1);}
 }
long long int ans=0;
for(long long int i(0);i<(n+1);i++){
 ans=max(ans,dp[i]);
 }
cout<<(ans)<<endl;
 
}
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}