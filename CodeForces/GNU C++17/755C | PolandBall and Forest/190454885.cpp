#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,vector<long long int>>adj;
const long long int N=100;
map<long long int,bool>vis;
 
void dfs(long long int u){
 if(vis[u]==1)return;
 vis[u]=1;
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs(v);
  }}
 
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  adj[i+1].push_back(vect[i]);
  adj[vect[i]].push_back(i+1);}
 long long int som=0;
 for(long long int i(0);i<n;i++){
  if(vis[i+1]==0){som++;dfs(i+1);}}
  cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}