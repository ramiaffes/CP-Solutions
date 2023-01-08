#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int,vector<long long int>>adj;
long long int res=0;
string s(N,' ');
map<long long int,pair<long long int,long long int>>dp;
map<long long int,bool>vis;
pair<long long int,long long int>dfs(long long int u){
 if(vis[u]==1)return dp[u];
 vis[u]=1;
 long long int a=0;
 long long int b=0;
 for(auto v:adj[u]){
  if(vis[v]==1){
   a+=dp[v].first;
   b+=dp[v].second;
   continue;}
  a+=dfs(v).first;
  b+=dfs(v).second;
  }
 if(s[u-1]=='W'){
  
  a++;}
 else b++;
 if(a==b){res++;}
 dp[u]=make_pair(a,b);
 return make_pair(a,b);
 }
int main()
{
 fast; 
 long long int t,n,k,a,b,q;
 cin>>t;
 while(t--){
  cin>>n;
  vis.clear();
  dp.clear();
  res=0;
  s.clear();
  adj.clear();
  
  vector<long long int>vect(n-1);
  for(long long int i(0);i<(n-1);i++)cin>>vect[i];
  for(long long int i=1;i<(n);i++){
   adj[vect[i-1]].push_back(i+1);
   }cin>>s;
  dfs(1);
  cout<<res<<endl;
  }
  
return 0;}