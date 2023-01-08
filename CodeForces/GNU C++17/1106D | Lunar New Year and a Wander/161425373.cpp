#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,vector<long long int>>adj;
map<long long int,bool>vis;
map<long long int,bool>vis1;
vector<long long int>res;
long long int som=0;
long long int n=0;
void bfs(long long int src){
 set<long long int>q;
 q.insert(src);
 while(!q.empty()){
  long long int u=*(q.begin());
  cout<<u<<" ";
  q.erase(q.begin());
  if(vis[u])continue;
  vis[u]=1;
  for(auto v:adj[u]){
  if((vis[v]))continue;
  q.insert(v);}
 
  }}
int main()
{
 fast; 
 long long int m,u,v;
 cin>>n>>m;
 for(long long int i(0);i<m;i++){
  cin>>u>>v;
  if(u!=v){
  adj[u].push_back(v);
  adj[v].push_back(u);}
  }
 bfs(1);
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}