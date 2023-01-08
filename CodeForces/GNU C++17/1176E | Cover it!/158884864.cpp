#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int ,vector<long long int>>adj;
map<long long int,bool>vis;
map<long long int,long long int>ty;
map<long long int,long long int>ty1;
map<long long int,bool>vis1;
bool isbipartie=true;
map<long long int ,vector<pair<long long int,long long int>>>m;
long long int som=1;
void dfs(int u,int cur_ty){
 ty[u]=cur_ty;
 vis[u]=1;
 for(auto v:adj[u]){
  if(vis[v]){
   if(ty[u]==ty[v]){m[ty[u]].push_back(make_pair(u,v));}
   continue;}
  dfs(v,1-cur_ty);}}
 
int main()
{
 fast; 
 long long int n,m,t,u,v;
 cin>>t;
 while(t--){
 cin>>n>>m;
 for(long long int i(0);i<m;i++){
  cin>>u>>v;
  adj[u].push_back(v);
  adj[v].push_back(u);}
 dfs(1,0);
 vector<long long int>res;
 vector<long long int>res1;
 for(long long int i(1);i<=n;i++){
  if(ty[i]==1){res.push_back(i);}
  else{res1.push_back(i);}}
 if(res1.size()<=(n/2)){
  cout<<res1.size()<<endl;
  for(auto v:res1)cout<<v<<" ";
  cout<<endl;}
 else{
  cout<<res.size()<<endl;
  for(auto v:res)cout<<v<<" ";
  cout<<endl;}
 
 ty.clear();
 vis.clear();
 adj.clear();
 vis1.clear();
 ty1.clear();
 
 
}
 
 
 
    
    
return 0;}