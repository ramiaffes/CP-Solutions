#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int ,vector<long long int>>adj;
map<long long int,long long int>hashage;
map<long long int,long long int>hashage1;
map<long long int ,bool>vis;
map<long long int,long long int>tin;
map<long long int,long long int>tout;
long long int timer=0;
long long int som=0;
void dfs(long long int u,int et,long long int  y){
 if(vis[u]==1)return;
 vis[u]=1;
 if(u==y)et=1;
 if(et==1)som++;
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs(v,et,y);
  }
 }
long long int som2=0;
void dfs2(long long int u,long long int x){
 if(u==x)return;
 if(vis[u]==1)return;
 vis[u]=1;
 som2++;
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs2(v,x);
  }
  }
int main()
{
 fast; 
 long long int n,x,y,a,b;
 cin>>n>>x>>y;
 for(long long int i(0);i<(n-1);i++){
  cin>>a>>b;
  adj[a].push_back(b);
  adj[b].push_back(a);}
 dfs(x,0,y);
 vis.clear();
 dfs2(y,x);
 cout<<(n*(n-1)-(som*(n-som2)))<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
    
    
return 0;}