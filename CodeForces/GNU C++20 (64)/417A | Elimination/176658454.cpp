#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,long long int>dp;
map<long long int,bool>vis;
void func(long long int val,long long int n,long long int c,long long int d){
 dp[val]=1e9;vis[val]=1;
 if(val==0){
  dp[val]=0;}
 if(val<=0){return;}
 
 if(vis[val-n]==0){
  func(val-n,n,c,d);}
 if(vis[val-1]==0){
  func(val-1,n,c,d);}
  if(dp[val-1]!=1e9){
   dp[val]=min(dp[val],dp[val-1]+d);}
  if(dp[val-n]!=1e9){
   dp[val]=min(dp[val],dp[val-n]+c);}
  
}
int main()
{
 fast; 
 long long int n,k,m,c,d;
 cin>>c>>d;
 cin>>n>>m;
 cin>>k;
 func(n*m,n,c,d);
 long long int ans=1e9;
 for(long long int i(0);i<=k;i++){
  ans=min(ans,dp[n*m-i]);
  }
 cout<<ans<<endl;
 
 
 
   
 
  
  
  
 
 
  
  
 
 
 
 
 
 
    
return 0;} 