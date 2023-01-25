#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=1e7;
const long int N=1e6;
map<long long int,long long int>vis;
int main()
{
 fast;
   long long int n,m,l;
   cin>>n>>m;
   vector<long long int>vect(n);
   vector<long long int>dp(n);
   for(long long int i(0);i<n;i++){
    cin>>vect[i];}
 dp[n-1]=1;
 vis[vect[n-1]]=1;
 for(long long int i(n-2);i>=0;i--){
  dp[i]=dp[i+1];
  if(vis[vect[i]]==0){dp[i]++;vis[vect[i]]=1;}
  }
 for(long long int i(0);i<m;i++){
  cin>>l;
  cout<<dp[l-1]<<endl;
  }
 
 
 
 
return 0;}