#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int ,set<long long int>>adj;
map<long long int,bool>vis;
map<long long int,bool>vis1;
map<long long int ,long long int> dist;
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
int main()
{
 fast; 
 long long int n,t,u,v,a,b,m1;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  adj[i+1].insert(vect[i]);}
 for(long long int i(0);i<n;i++){
  adj[i+1].insert(i+2);
     adj[i+2].insert(i+1);
 }
 for(long long int i(1);i<=n;i++){
  dist[i]=1e9;}
 bfs(1);
 for(long long int i(1);i<=n;i++){
  cout<<dist[i]<<" ";}
 
  
 
 
 
 
 
 
 
 
 
  
 
 
 
    
    
return 0;}