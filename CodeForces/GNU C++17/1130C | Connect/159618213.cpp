#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
map<pair<long long int,long long int>,bool>vis;
vector<pair<long long int,long long int>>res;
vector<pair<long long int,long long int>>res2;vector<string>vect(100);
long long int ans1=0;
long long int ans=1e9;
string s;
void dfs(pair<long long int,long long int>u){
 if(vis[u]==1)return;
 vis[u]=1;
 if(vect[u.first-1][u.second-1]=='1'){return;}
 res.push_back(u); 
 for(auto v:adj[u]){
  if(vis[v]){
   continue;}
  dfs(v);}}
void dfs2(pair<long long int,long long int>u){
 if(vis[u]==1)return;
 vis[u]=1;
 if(vect[u.first-1][u.second-1]=='1'){return;}
 res2.push_back(u);
 for(auto v:adj[u]){
  if(vis[v]){
   continue;}
  dfs2(v);}}
int main()
{
 fast; 
 long long int n,r1,c1,r2,c2;
 cin>>n;
 vect.resize(n);
 cin>>r1>>c1;
 cin>>r2>>c2;
 for(long long int i(0);i<n;i++){
 cin>>vect[i];}
 for(long long int i(1);i<=n;i++){
  for(long long int j(1);j<=n;j++){
   if(i<n){
    adj[make_pair(i,j)].push_back(make_pair(i+1,j));
    adj[make_pair(i+1,j)].push_back(make_pair(i,j));}
   if(j<n){
    adj[make_pair(i,j)].push_back(make_pair(i,j+1));
    adj[make_pair(i,j+1)].push_back(make_pair(i,j));}}}
 dfs(make_pair(r1,c1));
 if(vis[make_pair(r2,c2)]==1){
  cout<<0<<endl;}
 else{
  vis.clear();
  long long int ans=1e9;
  dfs2(make_pair(r2,c2));
  for(auto v:res2){
   for(auto v1:res){
    ans=min(ans,(v.first-v1.first)*(v.first-v1.first)+(v.second-v1.second)*(v.second-v1.second));}}
 cout<<ans<<endl;}
 
 
  
 
  
 
 
 
    
    
return 0;}