#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
map<pair<long long int,long long int>,bool>vis;
map<pair<long long int,long long int> ,long long int> dist;
void bfs(pair<long long int,long long int> src){
 dist[src]=0;
 queue<pair<long long int,long long int>>q;
 q.push(src);
 while(!q.empty()){
  pair<long long int,long long int> u=q.front();
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
 long long int n,x1,y1,x2,y2;
 cin>>n>>x1>>y1>>x2>>y2;
 for(long long int i(0);i<=n;i++){
  for(long long int j(0);j<=n;j++){
   dist[make_pair(i,j)]=1e5;
   if(i==0){
    if(j<n){
    adj[make_pair(i,j)].push_back(make_pair(i,j+1));
    adj[make_pair(i,j+1)].push_back(make_pair(i,j));}
    }
    if(j==0){
    if(i<n){
    adj[make_pair(i,j)].push_back(make_pair(i+1,j));
    adj[make_pair(i+1,j)].push_back(make_pair(i,j));}
    }
    if(i==n){
    if(j<n){
    adj[make_pair(i,j)].push_back(make_pair(i,j+1));
    adj[make_pair(i,j+1)].push_back(make_pair(i,j));}}
    if(j==n){
    if(i<n){
    adj[make_pair(i,j)].push_back(make_pair(i+1,j));
    adj[make_pair(i+1,j)].push_back(make_pair(i,j));}
    }
      }}
 bfs(make_pair(x1,y1));
 cout<<dist[make_pair(x2,y2)]<<endl;
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}