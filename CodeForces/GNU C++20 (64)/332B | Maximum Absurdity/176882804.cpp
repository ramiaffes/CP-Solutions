#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<set<long long int>,long long int>dp;
map<long long int,long long int>hashing;
 
int main()
{
 fast; 
 long long int n,k;
 cin>>n>>k;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 long long int som=0;
 vector<long long int>dp(n);
 for(long long int i(0);i<k;i++){
  som+=vect[i];
  }
 for(long long int i(0);i<=(n-k);i++){
  dp[i]=som;
  som-=vect[i];
  if((i+k)<n)
  som+=vect[i+k];
  else break;
  }
 vector<long long int>dp1(n);
 vector<long long int>dp2(n);
 dp1[n-k]=dp[n-k];
 dp2[n-k]=n-k;
 for(long long int i(n-k-1);i>=0;i--){
  dp1[i]=dp1[i+1];
  dp2[i]=dp2[i+1];
  if(dp[i]>dp1[i]){
   dp1[i]=dp[i];
   dp2[i]=i;}
  else if(dp[i]==dp1[i]){
   dp2[i]=i;}}
 long long int ans=0;
 for(long long int i(0);i<(n);i++){
  if((i+k)>=n)break;
  if(dp1[i+k]==0)break;
  ans=max(ans,dp[i]+dp1[i+k]);}
 for(long long int i(0);i<(n);i++){
  if((i+k)>=n)break;
  if(dp1[i+k]==0)break;
  if(ans==(dp[i]+dp1[i+k])){
   cout<<(i+1)<<" "<<(dp2[i+k]+1)<<endl;break;}}
 
 
 
 
 
   
 
  
  
  
 
 
  
  
 
 
 
 
 
 
    
return 0;} 