#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int,vector<long long int>>adj;
map<long long int,vector<long long int>>adj1;
map<long long int,bool>vis;
map<long long int,bool>res1;
map<long long int,bool>res2;vector<long long int>vect(N);
void dfs1(long long int u){
 if(vis[u]==1)return;
 vis[u]=1;
 res1[u]=1;
 if(vect[u-1]==1)return;
 for(auto v:adj1[u]){
  if(vis[v]){
   continue;}
  dfs1(v);}}
 void dfs2(long long int u){
 if(vis[u]==1)return;
 vis[u]=1;
 res2[u]=1;
 for(auto v:adj[u]){
  if(vis[v]){
   continue;}
  dfs2(v);}}
int main()
{
 fast; 
 long long int n,m,t,u,v,a,b;
 cin>>n>>m;
 vect.resize(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 for(long long int i(0);i<m;i++){
  cin>>a>>b;
  adj[a].push_back(b);
  adj1[b].push_back(a);
  }
 for(long long int i(0);i<n;i++){
  if((vis[i+1]==0)and(vect[i]==2)){dfs1(i+1);}}
 vis.clear();
  for(long long int i(0);i<n;i++){
  if((vis[i+1]==0)and(vect[i]==1)){dfs2(i+1);}}
 for(long long int i(0);i<n;i++){
  if((res2[i+1]==1)and(res1[i+1]==1)){cout<<1<<endl;}
  else{cout<<0<<endl;}}
 
 
 
 
  
 
 
 
    
    
return 0;}