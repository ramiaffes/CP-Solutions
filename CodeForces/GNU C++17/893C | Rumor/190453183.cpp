#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
vector<long long int> adj[N];vector<long long int>vect(N);
bool vis[N];
long long int min1=1e9;
void dfs(long long int u){
 if(vis[u]==1)return ;
 vis[u]=1;
 if(min1>=vect[u-1])min1=vect[u-1];
 for(auto v:adj[u]){
  if(vis[v]==1)continue;
  dfs(v);}}
int main()
{
 fast; 
 long long int n,m;
 cin>>n>>m;
 vect.resize(n);
 long long  int a=0;
 long long int b=0;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 for(long long int i(0);i<m;i++){
  cin>>a>>b;
  adj[a].push_back(b);
  adj[b].push_back(a);}
 long long int som=0;
 for(long long int i(0);i<n;i++){
  if(vis[i+1]==0){min1=1e9;dfs(i+1);som+=min1;}}
 cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}