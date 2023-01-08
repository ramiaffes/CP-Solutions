#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
long long int val=0;
map<long long int ,vector<long long int>>adj;
map<long long int ,vector<long long int>>adj1;
map<long long int,bool>vis1;
map<long long int,bool>vis;
map<long long int ,long long int> dist;
map<long long int ,long long int> dist1;
long long int som=0;
void bfs(long long int src){
 dist[src]=0;
 queue<long long int>q;
 q.push(src);
 while(!q.empty()){
  long long int u=q.front();
  q.pop();
  if(vis[u])continue;
  vis[u]=1;
  for(auto v:adj[u]){
   if(vis[v])continue;
   dist[v]=min(dist[v],(dist[u]+1));
   q.push(v);}
  }}
void bfs1(long long int src){
 dist1[src]=0;
 queue<long long int>q;
 q.push(src);
 while(!q.empty()){
  long long int u=q.front();
  q.pop();
  if(vis1[u])continue;
  vis1[u]=1;
  for(auto v:adj1[u]){
   if(vis1[v])continue;
   dist1[v]=min(dist1[v],(dist1[u]+1));
   q.push(v);}
  }}
int main()
{
 fast; 
 long long int n,m,u,v;
 cin>>n>>m;
 map<pair<long long int,long long int>,long long int>hashing;
 for(long long int i(0);i<m;i++){
  cin>>u>>v;
  adj[u].push_back(v);
  adj[v].push_back(u);
  hashing[make_pair(u,v)]=1;
     hashing[make_pair(v,u)]=1;
 }
 for(long long int i(1);i<n;i++){
  for(long long int j(i+1);j<=n;j++){
   if(hashing[make_pair(i,j)]==0){
    adj1[i].push_back(j);
    adj1[j].push_back(i);}
   }}for(long long int i(1);i<=n;i++){
  dist1[i]=1e9;
  dist[i]=1e9;}
 bfs(1);
 bfs1(1);
if(max(dist1[n],dist[n])==1e9){
    cout<<-1<<endl;
}
else{
 cout<<(max(dist1[n],dist[n]))<<endl;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}