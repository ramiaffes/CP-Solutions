#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int,vector<long long int>>adj;
map<long long int,bool>vis;
map<pair<long long int,long long int>,long long int>val;
long long int som=0;
vector<pair<pair<long long int,long long int>,long long int>>res;
void dfs1(long long int u,long long int src,long long int ans){
 if(adj[u].size()==0){if(ans!=1e9){
  res.push_back(make_pair(make_pair(src,u),ans));}return;}
 for(auto v:adj[u]){
  dfs1(v,src,min(ans,val[make_pair(u,v)]));}}
int main()
{
 fast; 
 long long int n,p,a,b,d;
 cin>>n>>p;
 for(long long int i(0);i<p;i++){
  cin>>a>>b>>d;
  adj[a].push_back(b);
  val[make_pair(a,b)]=d;
  vis[b]=1;}
 for(long long int i(1);i<=n;i++){
  if(vis[i]==0)dfs1(i,i,1e9);}
 cout<<res.size()<<endl;
 for(auto v:res){
     cout<<v.first.first<<" "<<v.first.second<<" "<<v.second<<endl;
 }
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}