#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
int main()
{
 fast; 
 long long int n,x,y;
 string s;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 cin>>s;
 vector<pair<long long int,long long int>>dp(n);
 vector<pair<long long int,long long int>>dp1(n);
 if(s[0]=='A')dp[0].first+=vect[0];
  else dp[0].second+=vect[0];
 for(long long int i(1);i<(n);i++){
  dp[i]=dp[i-1];
  if(s[i]=='A')dp[i].first+=vect[i];
  else dp[i].second+=vect[i];}
 if(s[n-1]=='A')dp1[n-1].first+=vect[n-1];
  else dp1[n-1].second+=vect[n-1];
 for(long long int i(n-2);i>=0;i--){
  dp1[i]=dp1[i+1];
  if(s[i]=='A')dp1[i].first+=vect[i];
  else dp1[i].second+=vect[i];}
 long long int ans=0;
 for(long long int i(0);i<(n-1);i++){
  ans=max(ans,dp[i].first+dp1[i+1].second);}
 for(long long int i(0);i<(n-1);i++){
  ans=max(ans,dp[i].second+dp1[i+1].first);}
 ans=max(dp1[0].second,ans);
 ans=max(ans,dp[n-1].first);
 cout<<ans<<endl;
 
 
    
    
return 0;}