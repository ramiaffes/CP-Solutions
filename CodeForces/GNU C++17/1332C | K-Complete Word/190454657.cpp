#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,vector<long long int>>adj;
map<long long int,bool>vis;
map<char,long long int>hashing;
string  s;
long long int sh=0;
void dfs(long long int u){
 if(vis[u]==1)return;
 vis[u]=1;
 hashing[s[u-1]]++;
 sh++;
 if(adj[u].empty())return;
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs(v);
  }
 }
int main()
{
 fast; 
 long long int n,m,k,t;
 cin>>t;
 while(t--){
 adj.clear();
 vis.clear();
 cin>>n>>k;
 cin>>s;
 for(long long int i(0);i<n;i++){
  adj[i+1].push_back(n-i);
  adj[n-i].push_back(i+1);}
 for(long long int i(0);i<(n-k);i++){
  if(find(adj[i+1].begin(),adj[i+1].end(),k+i+1)==adj[i+1].end()){
  adj[i+1].push_back(k+i+1);
  adj[k+i+1].push_back(i+1);}}
 long long int som=0;
 long long int ans=1e6;
 for(long long int i(0);i<n;i++){
  if(vis[i+1]==0){dfs(i+1);
  for(auto it=hashing.begin();it!=hashing.end();it++){ans=min(ans,(sh-it->second));}
  som+=ans;ans=1e6;sh=0;hashing.clear();}}
 cout<<som<<endl;
 
 
 
 
}
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}