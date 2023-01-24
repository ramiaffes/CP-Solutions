#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<long long int,set<long long int>>adj;
map<long long int,bool>vis;
void dfs(long long int u){
 if(vis[u]==1)return;
 cout<<u<<" ";
 vis[u]=1;
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs(v);
  }
 }
int main()
{
 fast;
 long long int n,a,b;
 string s,s1;
 cin>>n;
 set<long long int>se;
 for(long long int i(0);i<n;i++){
  cin>>a>>b;
  adj[b].insert(a);
  adj[a].insert(b);
  se.insert(a);
  se.insert(b);}
 for(auto v:se){
  if(adj[v].size()==1){dfs(v);break;}}
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}