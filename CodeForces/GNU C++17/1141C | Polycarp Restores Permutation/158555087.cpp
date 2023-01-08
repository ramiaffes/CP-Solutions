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
 long long int n,t;
 cin>>n;
 vector<long long int>vect(n-1);
 for(long long int i(0);i<(n-1);i++)cin>>vect[i];
 vector<long long int>dp(n-1);
 dp[0]=vect[0];
 for(long long int i(1);i<(n-1);i++){
  dp[i]=dp[i-1];
  dp[i]+=vect[i];
  }
 long long int ans=1e9;
 for(long long int i(0);i<dp.size();i++){
  ans=min(ans,dp[i]);}
 long long int val2=0;
 ans=min(ans,val2);
 long long int val=1-ans;
 vector<long long int>res;
 res.push_back(val);
 for(long long int i(0);i<dp.size();i++){
  res.push_back(dp[i]+val);}
 map<long long int,bool>vis;
 for(long long int i(0);i<res.size();i++){
  vis[res[i]]=1;}
 bool test=true;
 for(long long int i(1);i<=n;i++){
  if(vis[i]==0){test=false;break;}}
 if(test==false)cout<<-1<<endl;
 else{
 for(auto v:res)cout<<v<<" ";}
 
 
 
 
 
 
 
 
    
    
return 0;}