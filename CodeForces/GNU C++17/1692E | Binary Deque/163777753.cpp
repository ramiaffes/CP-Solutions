#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
int main()
{
 fast; 
 long long int t,n,k,s;
 cin>>t;
 while(t--){
  cin>>n>>s;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++)cin>>vect[i];
  vector<long long int>dp(n);
  dp[0]=vect[0];
  for(long long int i(1);i<n;i++){
   dp[i]=dp[i-1];
   dp[i]+=vect[i];
   }
  vector<long long int>dp1(n);
  dp1[n-1]=vect[n-1];
  for(long long int i(n-2);i>=0;i--){
   dp1[i]=dp1[i+1];
   dp1[i]+=vect[i];
   }
  long long int ans=1e9;
  if(dp[n-1]==s)ans=0;
  for(long long int i(0);i<n;i++){
   auto it=upper_bound(dp.begin()+i,dp.end(),s+dp[i]);
   if(*(it-1)==(s+dp[i])){
    ans=min(ans,i+1+(n-(it-dp.begin())));
   }}
  for(long long int i(0);i<n;i++){
      if((dp[n-1]-dp1[i])==s){
          ans=min(ans,n-i);
      }
  }
  
  if(ans==1e9)ans=-1;
  cout<<ans<<endl;
  
  
  
 }
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}