#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
map<pair<long long int,long long int>,bool>vis;
map<pair<long long int,long long int>,bool>vis1;
vector<pair<long long int,long long int>>res;
vector<pair<pair<long long int,long long int>,pair<long long int,long long int>>>res2;
long long int som=0;
void dfs(pair<long long int,long long int> u,long long int k){
 if(vis[u]==1)return;
 vis[u]=1;
 res.push_back(u);
  if((res.size()==2)and(som<(k-1))){
   cout<<2<<endl;
   for(auto v:res){
    cout<<v.first<<" "<<v.second<<endl;}som++;res.clear();}
 for(auto v:adj[u]){ 
  if(vis[v]){
   continue;}
  dfs(v,k);
  
  }}
int main()
{
 fast; 
 long long int n,m,k;
 cin>>n>>m>>k;
 for(long long int i(1);i<=n;i++){
  for(long long int j(1);j<=m;j++){
   if(i<n){
   adj[make_pair(i,j)].push_back(make_pair(i+1,j));
   adj[make_pair(i+1,j)].push_back(make_pair(i,j));}
  if(j<m){
   adj[make_pair(i,j)].push_back(make_pair(i,j+1));
   adj[make_pair(i,j+1)].push_back(make_pair(i,j));}}}
 dfs(make_pair(n,m),k);
 cout<<res.size()<<endl;
 for(auto v:res)cout<<v.first<<" "<<v.second<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}