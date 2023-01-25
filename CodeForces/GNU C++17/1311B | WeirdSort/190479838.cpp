#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long long int N=1e7+5;
unordered_map<long long int, long long int> adj;
unordered_map<long long int, bool> vis;
long long int dfs(long long int u){
 if(vis[u])return u;
 vis[u]=1;
 if(adj[u]==0)return u;
 dfs(adj[u]);}
int main()
{
 fast; 
 long long int  n,m,t;
 cin>>t;
 while(t--){ 
  cin>>n>>m;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];}
  vector<long long int>mas(m);
  for(long long int i(0);i<m;i++){
   cin>>mas[i];
   adj[mas[i]+1]=mas[i];}
  
  for(long long int i(n-1);i>=0;i--){
   long long int p=dfs(i+1);
   sort(vect.begin()+(p-1),vect.begin()+i+1);}
  if(is_sorted(vect.begin(),vect.end())){
   cout<<"Yes"<<endl;}
 else{
  cout<<"No"<<endl;}
 
 vis.clear();
 adj.clear(); 
  
  
 }
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}