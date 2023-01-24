#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int ,vector<long long int>>adj;
map<long long int,bool>vis;
map<long long int,long long int>parent;
long  long int som=0;
long long int som1=0;
 
void dfs(long long int u){
 if(vis[u]==1)return;
 vis[u]=1;
 for(auto v:adj[u]){
  if((vis[v]))continue;
  parent[v]=u;
  dfs(v);
  }
 }
int main()
{
 fast;
long long int n,r1,r2,p;
long long int p1=0;
cin>>n>>r1>>r2;
long long int i=0;
while(p1<(n-1)){
 cin>>p;
 if((i+1)==r1){i++;}
 adj[p].push_back(i+1);
 adj[i+1].push_back(p);
 p1++;
 i++;}
dfs(r2);
for(long long int i(0);i<(n);i++){
 if((i+1)!=r2){
  cout<<parent[i+1]<<" ";}}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}