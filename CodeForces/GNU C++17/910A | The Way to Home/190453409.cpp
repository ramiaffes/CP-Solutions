#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
vector<long long int> adj[N];
bool vis[N];
long long int dist[N];
void bfs(long long int src){
 for(long long int i(0);i<=1000;i++){
  dist[i]=1000;
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
 long long int n,d;
 string s;
 cin>>n>>d;
 cin>>s;
  vector<long long int>se;
  for(long long int i(0);i<n;i++){
   if(s[i]=='1')se.push_back(i+1);}
  for(long long int i(0);i<(se.size()-1);i++){
   for(long long int j(i+1);j<se.size();j++){
    if((se[j]-se[i])<=d){
     adj[se[i]].push_back(se[j]);}}}
  bfs(1);
  if(dist[n]==1000)cout<<-1<<endl;
  else
  cout<<dist[n]<<endl;
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}