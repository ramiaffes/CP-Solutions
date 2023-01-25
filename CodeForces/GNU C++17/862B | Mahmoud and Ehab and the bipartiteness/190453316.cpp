#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
vector<long long int> adj[N];
 
bool vis[N];
long long int som1=0;
long long int som2=0;
long long int som=0;
void dfs1(long long int u,int cur_ty){
 if(vis[u]==1)return;
 if(cur_ty==1)som1++;
 else som2++;
 vis[u]=1;
 if(adj[u].empty())return;
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs1(v,1-cur_ty);
  }}
void dfs2(long long int u,int cur_ty){
 if(vis[u]==1)return;
 vis[u]=1;if(cur_ty==1)som+=(som2-adj[u].size());
 if(adj[u].empty()){return;}
 for(auto v:adj[u]){
  if(vis[v])continue;
  dfs2(v,1-cur_ty);
  }}
int main()
{
 fast; 
 long long int n;
 cin>>n;
 long long int a=0;
 long long  int b=0;
 set<long long int>se;
 for(long long int i(1);i<n;i++){
  cin>>a>>b;
  se.insert(a);
  se.insert(b);
  adj[a].push_back(b);
  adj[b].push_back(a);}
 for(auto it=se.begin();it!=se.end();it++){
 if(vis[*it]==0)dfs1(*it,0);}
 for(long long int u(1);u<=n;u++){
  vis[u]=0;}
 for(auto it=se.begin();it!=se.end();it++){
 if(vis[*it]==0)dfs2(*it,0);}
 cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}