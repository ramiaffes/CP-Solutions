#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,vector<long long int>>adj;
const long long int N=100;
map<long long int,bool>vis;
vector<long long int>vect1(N);
long long int ans=0;
vector<vector<long long int>>vect(N,vect1);
void dfs(long long int u,long long int som){
 if(vis[u]==1)return;
 vis[u]=1;
 ans=max(ans,som);
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs(v,som+vect[u-1][v-1]);
  }
 }
int main()
{
 fast; 
 long long int n,u,v,c;
 cin>>n;
 vect.resize(n,vector<long long int>(n));
 for(long long int i(0);i<(n-1);i++){
  cin>>u>>v>>c;
  adj[u+1].push_back(v+1);
  adj[v+1].push_back(u+1);
  vect[u][v]=c;
  vect[v][u]=c;}
 dfs(1,0);
 cout<<ans<<endl;
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}