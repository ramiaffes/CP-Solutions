#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
map<long long int,set<long long int>>adj;
map<long long int,bool>vis;
map<long long int ,long long int> dist;
long long int som=0;
void bfs(long long int  src){
 dist[src]=0;
 queue<long long int >q;
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
 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 for(long long int i(0);i<32768;i++){
  adj[(i+1)%32768].insert(i);
   adj[(2*i)%32768].insert(i);}
for(long long int i(0);i<32768;i++){
 dist[i]=1e9;}
bfs(0);
for(long long int i(0);i<n;i++){
 cout<<dist[vect[i]]<<endl;}
 
 
 
 
 
 
 
 
 
 
 
return 0;}  