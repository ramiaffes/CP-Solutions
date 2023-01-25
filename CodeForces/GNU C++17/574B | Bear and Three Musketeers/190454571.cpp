#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,long long int> hashage;
map<long long int ,vector<long long int>> adj;
map<long long int ,bool>vis;
map<long long int ,bool>vis1;
long long int som=0;
void bfs(long long int src){
 queue<long long int>q;
 q.push(src);
 while(!q.empty()){
  som=0;
  long long int u=q.front();
  q.pop();
  if(vis[u])continue;
  vis[u]=1;
  for(auto v:adj[u]){
   som+=1;
   if(vis[v])continue;
   q.push(v);}
  hashage[u]=som-2;
  }}long long int ans=1e6;
void bfs1(long long int src){
 queue<long long int>q;
 q.push(src);
 while(!q.empty()){
  som=0;
  long long int u=q.front();
  q.pop();
  if(vis1[u])continue;
  vis1[u]=1;
  for(long long int i(0);i<(adj[u].size());i++){
   for(long long int j(0);j<adj[u].size();j++){
    if(find(adj[adj[u][i]].begin(),adj[adj[u][i]].end(),adj[u][j])!=adj[adj[u][i]].end()){
     ans=min(ans,hashage[adj[u][i]]+hashage[adj[u][j]]+hashage[u]);}}}
  for(auto v:adj[u]){
   som+=1;
   if(vis1[v])continue;
   q.push(v);}
  }}
int main()
{
 fast; 
 long long int n,m,a,b;
 cin>>n>>m;
 for(long long int i(0);i<m;i++){
  cin>>a>>b;
  adj[a].push_back(b);
  adj[b].push_back(a);
 }
 for(long long int i(0);i<n;i++){
  if(vis[i+1]==0)bfs(i+1);}
 
 for(long long int i(0);i<n;i++){
  if(vis1[i+1]==0)bfs1(i+1);}
 if(ans==1e6)cout<<-1<<endl;
 else cout<<ans<<endl;
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}