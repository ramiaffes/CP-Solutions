#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long int N=1e6;
 
 
int main()
{
 fast;
   long long int n,t,k;
   cin>>n>>k;
   vector<long long int>vect(n);
   vector<long long int>vect1(n);
   for(long long int i(0);i<n;i++)cin>>vect[i];
   for(long long int i(0);i<n;i++)cin>>vect1[i];
   vector<long long int>dp(n);
   long long int som=0;
   for(long long int i(0);i<n;i++){
    if(vect1[i]==1)som+=vect[i];}
  if(vect1[n-1]==0)dp[n-1]=vect[n-1];
   for(long long int i(n-2);i>=0;i--){
    dp[i]=dp[i+1];
    if(vect1[i]==0){
     dp[i]+=vect[i];
    }}
 long long int ans=0;
 for(long long int i(0);i<(n-k+1);i++){
  ans=max(ans,dp[i]-dp[i+k-1]+vect[i+k-1]*(vect1[i+k-1]==0));
  }
 cout<<(som+ans)<<endl;
 
 
 
 
 
 
return 0;}