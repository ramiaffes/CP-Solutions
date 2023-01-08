#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int ,set<long long int>>adj;
map<long long int,bool>vis;
map<long long int,long long int>dist;
long long int som=0;
map<pair<long long int,long long int>,long long int>hashing;
map<long long int,long long int>parent;
long long int som1=0;
bool test=true;
void bfs(long long int src){
 dist[src]=0;
 set<pair<long long int,long long int>>q;
 q.insert(make_pair(0,src));
 while(!q.empty()){
  long long int u=(q.begin())->second;
  q.erase(q.begin());
  if(vis[u])continue;
  vis[u]=1;
 for(auto v:adj[u]){
    if(dist[v]>(dist[u]+hashing[make_pair(u,v)])){
  dist[v]=min(dist[v],dist[u]+hashing[make_pair(u,v)]);parent[v]=u;}}
  for(auto v:adj[u]){
   if(vis[v])continue;
   q.insert(make_pair(dist[v],v));}
  }}
int main()
{
 fast; 
 long long int n,m,a,b,w;
 cin>>n>>m;
 for(long long int i(0);i<m;i++){
  cin>>a>>b>>w;
  if(a!=b){
  adj[a].insert(b);
  adj[b].insert(a);
  if(hashing[make_pair(a,b)]==0){
       hashing[make_pair(a,b)]=w;
       hashing[make_pair(b,a)]=w;
  }
  hashing[make_pair(a,b)]=min(w,hashing[make_pair(a,b)]);
  hashing[make_pair(b,a)]=min(w,hashing[make_pair(a,b)]);
 }}
 dist[1]=0;
 for(long long int i(2);i<=n;i++){
  dist[i]=1e11;}
 bfs(1);
 if(vis[n]==0){
     cout<<-1<<endl;
 }
 else{
 vector<long long int>res;
 long long int u=n;
 while(u!=0){
     res.push_back(u);
     u=parent[u];
 }
 reverse(res.begin(),res.end());
 for(auto v:res){
     cout<<v<<" ";
 }}
 
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}