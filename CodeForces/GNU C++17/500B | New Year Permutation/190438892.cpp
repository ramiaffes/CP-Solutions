#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
map<long long int,bool>vis;
 vector<long long int>res;
 vector<long long int>res1;
 vector<long long int>vect(N);
void dfs(long long int u){
 if(vis[u]==1)return;
 vis[u]=1;
 res.push_back(u);
 res1.push_back(vect[u-1]);
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs(v);
  }}
 
int main()
{
 fast; 
 long long int n,m,k;
 cin>>n;
 vect.resize(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 vector<char>vect1(n);
 vector<vector<char>>mat(n,vect1);
 for(long long int i(0);i<n;i++){for(long long int j(0);j<n;j++){
  cin>>mat[i][j];
  if(mat[i][j]=='1'){
   adj[i+1].push_back(j+1);
   adj[j+1].push_back(i+1);}}}
 for(long long int i(0);i<n;i++){
  if(vis[i+1]==0){dfs(i+1);
 sort(res.begin(),res.end());
 sort(res1.begin(),res1.end());
  for(long long int i(0);i<res.size();i++){
   vect[res[i]-1]=res1[i];}
  res.clear();
  res1.clear();}}
for(long long int i(0);i<n;i++)cout<<vect[i]<<" "; 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}