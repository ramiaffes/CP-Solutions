#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
map<pair<long long int,long long int>,bool>vis;
void dfs(pair<long long int,long long int> u){
 if(vis[u]==1)return;
 vis[u]=1;
 for(auto v:adj[u]){
  if(vis[v]){
   continue;}
  dfs(v);}}
 
int main()
{
 fast; 
 long long int n,m,t,u,v;
 string s1;
 string s2;
 cin>>n>>m;
 cin>>s1;
 cin>>s2;
 for(long long int j(1);j<=m;j++){
  for(long long int i(1);i<=n;i++){
   if(s2[j-1]=='v'){
   if(i<n){
   adj[make_pair(i,j)].push_back(make_pair(i+1,j));}
   
   }
   else {
    if(i>=2){
     adj[make_pair(i,j)].push_back(make_pair(i-1,j));}
    }
   if(s1[i-1]=='>'){
   if(j<m){
    adj[make_pair(i,j)].push_back(make_pair(i,j+1));
    }
   }else{
    if(j>=2){adj[make_pair(i,j)].push_back(make_pair(i,j-1));}}}}
 bool test=true;
 for(long long int j(1);j<=m;j++){
  for(long long int i(1);i<=n;i++){
   dfs(make_pair(i,j));
   for(long long int d1(1);d1<=m;d1++){
  for(long long int d(1);d<=n;d++){
   if((vis[make_pair(d,d1)]==0)and(make_pair(d,d1)!=make_pair(i,j))){
    test=false;break;}}if(test==false)break;}
   vis.clear();if(test==false)break;
   }if(test==false)break;}
 if(test==true){
  cout<<"YES"<<endl;}
 else{
  cout<<"NO"<<endl;}
 
  
 
 
 
    
    
return 0;}