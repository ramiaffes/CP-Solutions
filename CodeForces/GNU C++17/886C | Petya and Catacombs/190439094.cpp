#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int> parent; 
const long int N=1e4;
map<long long int,vector<long long int>>adj;
map<long long int,bool>vis;
long long int som=0;
void dfs(long long int u){
 if(vis[u]==1)return;
 vis[u]=1;
 if(adj[u].empty()){som++;return;}
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs(v);
  }
 }
int main()
{
 fast;
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){cin>>vect[i];adj[vect[i]].push_back(i+1);}
 for(long long int i(0);i<n;i++){if(vis[i+1]==0)dfs(i+1);}
 cout<<som<<endl;
 
 
 
  
 
 
 
 
 
return 0;}