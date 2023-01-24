#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
const  long long int M=1e4;
map<pair<long long int,long long int>,set<pair<long long int,long long int>>>adj;
map<pair<long long int,long long int>,bool>vis;
vector<char>vect1(M);
vector<vector<char>>vect(N,vect1);
long long int s=0;
long long int som=0;
void dfs1(pair<long long int,long long int> u,long long int k){
 if(vis[u]==1)return;
 vis[u]=1;
  s++;
  
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs1(v,k);
  }
 }
void dfs(pair<long long int,long long int> u,long long int k){
 if(vis[u]==1)return;
 vis[u]=1;
 if((som>=(s-k))){
  vect[u.first][u.second]='X';
  }
  
  som++;
  
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs(v,k);
  }
 }
int main()
{
 fast; 
 long long int n,m,k;
 cin>>n>>m>>k;
 vect.resize(n, vector<char>(m));
 for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){cin>>vect[i][j];} }
 for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){
   if(i<(n-1)){
    if((vect[i][j]=='.')and(vect[i+1][j]=='.')){
   adj[make_pair(i,j)].insert(make_pair(i+1,j));
   adj[make_pair(i+1,j)].insert(make_pair(i,j));}
   }
   if(j<(m-1)){
    if((vect[i][j]=='.')and(vect[i][j+1]=='.')){
    adj[make_pair(i,j)].insert(make_pair(i,j+1));
   adj[make_pair(i,j+1)].insert(make_pair(i,j));}}}}
 bool test=false;
 for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){
   if(vect[i][j]=='.'){
    dfs1(make_pair(i,j),k);
    vis.clear();
    dfs(make_pair(i,j),k);
    test=true;
    break;
    }}if(test==true)break;}
 
 for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){
   cout<<vect[i][j];}
   cout<<endl;}
  
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}