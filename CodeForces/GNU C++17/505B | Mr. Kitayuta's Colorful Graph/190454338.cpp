#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<long long int ,vector<pair<long long int,long long int>>> adj;
map<long long int,bool>vis;
long long int som=0;
void dfs(long long int u,long long int r,long long int val){
 if(vis[u]==1)return;
 vis[u]=1;
 if(adj[u].empty())return;
 if(u==r){som++;return;}
 for(auto v:adj[u]){
  if((vis[v.first]))continue;
  if(v.second!=val)continue;
  dfs(v.first,r,val);
  }}
 
int main()
{
 fast; 
 long long int n,m,a,b,c,u,v,q;
 cin>>n>>m;
 set<long long int>se;
 for(long long int i(0);i<m;i++){
  cin>>a>>b>>c;
  adj[a].push_back(make_pair(b,c));
  adj[b].push_back(make_pair(a,c));
  se.insert(c);
  }
 cin>>q;
 for(long long int i(0);i<q;i++){
   cin>>u>>v;
   for(auto it=se.begin();it!=se.end();it++){
   dfs(u,v,*it);vis.clear();}
   cout<<som<<endl;
   som=0;
  }
   
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}