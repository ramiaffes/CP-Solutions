#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,vector<long long int>>adj;
const long long int N=1e6;
map<long long int,long long int>vis;
map<long long int,long long int>res1;
vector<long long int>res(N);
long long int som=0;
void dfs(long long int u){
 if(vis[u]==2)return;
 if(vis[u]==1){res[u-1]=som+1-res1[u];}
 vis[u]+=1;
 som++;
 res1[u]=som;
 for(auto v:adj[u]){
  dfs(v);
  }
 }
int main()
{
 fast; 
 long long int n,q;
 cin>>q;
 for(long long int i(0);i<q;i++){
  cin>>n;res.resize(n);
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){cin>>vect[i];
   adj[i+1].push_back((vect[i]));
   }
 for(long long int i(0);i<n;i++){
 if(vis[i+1]==0)dfs(i+1);}
 vis.clear();
 adj.clear();
 som=0;
 res1.clear();
 
 for(long long int i(0);i<n;i++)cout<<res[i]<<" ";
 cout<<endl;}
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}