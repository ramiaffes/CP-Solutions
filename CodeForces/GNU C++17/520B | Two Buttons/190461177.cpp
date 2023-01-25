#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
vector<long long int> adj[N];
long long int dist[N];
bool test=true;
bool vis[N];
 void remplir(long long int a){
  if(!adj[a].empty())return;
 if(((a-1)>=0)){
 adj[a].push_back(a-1);}
 if(2*a<=10000){
 adj[a].push_back(a*2);}
 if(!adj[a].empty()){
 for(auto v:adj[a]){
   remplir(v);}
 }}
void bfs(long long int src){
 for(long long int i(0);i<=10000;i++){
  dist[i]=1e8;
  vis[i]=0;}
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
   dist[v]=min(dist[v],dist[u]+1);
   q.push(v);}
  }}
int main()
{
 fast; 
 long long int n,m;
 cin>>n>>m;
 remplir(n);
 bfs(n);
 cout<<dist[m]<<endl;
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}