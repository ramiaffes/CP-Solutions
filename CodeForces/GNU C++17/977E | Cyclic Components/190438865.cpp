#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,vector<long long int>>adj;
const long long int N=100;
map<long long int,bool>vis;
map<long long int,long long int>parent;
long long int val=0;
long long int som1=0;
bool test=false;
void dfs(long long int u,long long int som2,long long  int src){
 if(vis[u]==1)return;
 vis[u]=1;
 if(adj[u].size()!=2){test=false;return;}
 som1=0;
 som2++;
 for(auto v:adj[u]){
  if((vis[v]))continue;
  som1++;
  dfs(v,som2,src);
  }
 if(som1>1){
  test=false;return;}
 if(som1==0){
  if((find(adj[src].begin(),adj[src].end(),u)!=adj[src].end())and(som2>2)){test=true;}}
 }
int main()
{
 fast; 
 long long int n,m,u,v;
 cin>>n>>m;
 for(long long int i(0);i<m;i++){
  cin>>u>>v;
  adj[u].push_back(v);
  adj[v].push_back(u);}
 long long int som=0;
 for(long long int i(0);i<n;i++){
  if(vis[i+1]==0){dfs(i+1,0,i+1);if(test==true)som++;test=false;som1=0;}}
 cout<<som<<endl;
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}