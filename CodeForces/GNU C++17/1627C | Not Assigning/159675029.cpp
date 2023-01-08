#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int ,vector<long long int>>adj;
map<long long int,bool>vis;
map<long long int,bool>vis1;
bool isbipartie=true;
map<long long int ,long long int>m;
map<pair<long long int,long long int>,long long int>m1;
long long int som=1;
bool test=true;
void dfs(long long int u,int cur_ty){
 if(test==false)return;
 if(vis[u]==1)return;
 if(adj[u].size()>2){test=false;return;}
 vis[u]=1;
 for(auto v:adj[u]){
  if(vis[v]){
   continue;}
  if(cur_ty==0){
   m[m1[make_pair(u,v)]]=2;}
  else{
      
   m[m1[make_pair(u,v)]]=3;}
  cur_ty=1-cur_ty;
  dfs(v,cur_ty);}}
int main()
{
 fast; 
 long long int n,t,u,v,a,b;
 cin>>t;
 while(t--){
 cin>>n;
 for(long long int i(0);i<(n-1);i++){
  cin>>u>>v;
  adj[u].push_back(v);
  adj[v].push_back(u);
  m1[make_pair(u,v)]=i;
  m1[make_pair(v,u)]=i;
  }
 long long int val=1;
 dfs(val,0);
 if(test==false){
     cout<<-1<<endl;
 }
 else{
 for(long long int i(0);i<(n-1);i++){
  cout<<m[i]<<" ";}}
 cout<<endl;
 m1.clear();
 m.clear();
 test=true;
 vis.clear();
 adj.clear();
 }
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}