#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,long long int> hashage;
map<long long int ,vector<long long int>> adj;
map<long long int ,bool>vis;
map<long long int ,bool>vis1;
long long int som=0;
vector<long long int>vect(N);
void dfs1(long long int u,long long int val,long long int m){
 if(vis[u]==1)return;
 vis[u]=1;
 if(vect[u-1]==1){
 val++;}
 else val=0;
 if(val>m)return;
 if((adj[u].size()==1)and(u!=1)){som++;return;}
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs1(v,val,m);
  }}
int main()
{
 fast; 
 long long int n,m,a,b;
 cin>>n>>m;
 vect.resize(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 for(long long int i(0);i<(n-1);i++){
  cin>>a>>b;
  adj[a].push_back(b);
  adj[b].push_back(a);
  }
 dfs1(1,0,m);
 cout<<som<<endl;
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}