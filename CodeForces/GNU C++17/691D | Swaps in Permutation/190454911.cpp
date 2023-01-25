#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,vector<long long int>>adj;
const long long int N=100;
map<long long int,bool>vis;
 vector<long long int>res;
 vector<long long int>res1;
 vector<long long int>vect(N);
void dfs(long long int u){
 if(vis[u]==1)return;
 vis[u]=1;
 res.push_back(u);
 res1.push_back(vect[u-1]);
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs(v);
  }}
 
int main()
{
 fast; 
 long long int n,m,u,v;
 cin>>n>>m;
 vect.resize(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  }
 for(long long int i(0);i<m;i++){
  cin>>u>>v;
  adj[u].push_back(v);
  adj[v].push_back(u);
  }
 for(long long int i(0);i<n;i++){
  if(vis[i+1]==0){dfs(i+1);
 sort(res.begin(),res.end());
 sort(res1.begin(),res1.end());
 reverse(res1.begin(),res1.end());
  for(long long int i(0);i<res.size();i++){
   vect[res[i]-1]=res1[i];}
  res.clear();
  res1.clear();}}
for(long long int i(0);i<n;i++)cout<<vect[i]<<" "; 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}