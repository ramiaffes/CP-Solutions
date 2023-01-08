#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int,vector<long long int>>adj;
map<long long int,bool>vis;
map<long long int,long long int>ty;
map<long long int,long long int>ty1;
map<long long int,bool>vis1;
bool isbipartie=true;
long long int som=1;
void dfs(int u,int cur_ty){
 ty[u]=cur_ty;
 if(ty[u]==1)som*=1;
 else som*=2;
 som=som%998244353;
 vis[u]=1;
 for(auto v:adj[u]){
  if(vis[v]){
   if(ty[u]==ty[v]){isbipartie=false;}
   continue;}
  dfs(v,1-cur_ty);}}
void dfs2(int u,int cur_ty){
 ty1[u]=cur_ty;
 if(ty1[u]==1)som*=1;
 else som*=2;
 som=som%998244353;
 vis1[u]=1;
 for(auto v:adj[u]){
  if(vis1[v]){
   if(ty1[u]==ty1[v]){isbipartie=false;}
   continue;}
  dfs2(v,1-cur_ty);}}
int main()
{
 fast; 
 long long int n,t,m,u,v;
 string s;
 cin>>t;
 while(t--){
 cin>>n>>m;
 for(long long int i(0);i<m;i++){
  cin>>u>>v;
  adj[u].push_back(v);
  adj[v].push_back(u);}
 long long int som2=0;
 long long int som3=1;
 for(long long int i(1);i<=n;i++){
 if(vis[i]==0){dfs(i,0);som2+=(som%998244353);som2=som2%998244353;som=1;dfs2(i,1);som2+=(som%998244353);som2=som2%998244353;som=1;som3*=som2;som3=som3%998244353;som2=0;
if(isbipartie==false)break;}}
 if(isbipartie==false){
  cout<<0<<endl;
  }
 else{
  cout<<(som3)<<endl;}
 ty.clear();
 vis.clear();
 adj.clear();
 som=1;
 isbipartie=true;
 vis1.clear();
 ty1.clear();
 som2=0;
}
  
  
 
 
 
 
 
    
    
return 0;}