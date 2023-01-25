#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,vector<long long int>>adj;
map<long long int,long long int>parent;
map<long long int,bool>vis;
map<long long int,long long int>hashing;
long long int som=0;
void bfs(long long int src){
 queue<long long int>q;
 q.push(src);
 while(!q.empty()){
  long long int u=q.front();
  q.pop();
  if(vis[u])continue;
  vis[u]=1;
  for(auto v:adj[u]){
   if(vis[v])continue;
   parent[v]=u;
   q.push(v);}
  }}
int main()
{
 fast; 
 long long int n,x,y;
 cin>>n;
 vector<long long int>vect(n);
 vector<long long int>vect2(n);
 for(long long int i(0);i<(n-1);i++){
  cin>>x>>y;
  adj[x].push_back(y);
  adj[y].push_back(x);
  }
 parent[1]=0;
 for(long long int i(0);i<n;i++){cin>>vect[i];}
 bfs(1);
 for(long long int i(0);i<n;i++){
  hashing[vect[i]]=i+1;}
 for(long long int i(0);i<n;i++){
  vect2[i]=hashing[parent[vect[i]]];}
 
 if(is_sorted(vect2.begin(),vect2.end()))cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
  
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}