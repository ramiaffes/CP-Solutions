#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int ,vector<long long int>>adj;
map<long long int,bool>vis;
map<long long int,bool>vis1;
bool isbipartie=true;vector<long long int>vect(N);
map<long long int ,set<long long int>>m;
long long int som=0;
long long int som1=0;
long long int val=0;
bool test=true;
void dfs(long long int u,long long int src){
 if(vis[u]==1)return;
 vis[u]=1;
 if(vect[u-1]!=vect[src-1]){val=u;return;}
 for(auto v:adj[u]){ 
  if(vis[v]){
   continue;}
  dfs(v,src);
  }}
void bfs(long long int src){
 queue<long long int>q;
 q.push(src);
 while(!q.empty()){
  long long int  u=q.front();
  q.pop();
  if(vis[u])continue;
  vis[u]=1;
  for(auto v:adj[u]){
   if(vis[v])continue;
   if((vect[v-1]!=vect[u-1])and(u!=src)){test=false;break;}
   q.push(v);}if(test==false)break;
  }
}
int main()
{
 fast; 
 long long int n,t,u,v,a,b,m1;
 cin>>n;
 vect.resize(n);
 
 for(long long int i(0);i<(n-1);i++){
  cin>>a>>b;
  adj[a].push_back(b);
  adj[b].push_back(a);
 }
 for(long long int i(0);i<(n);i++){
  cin>>vect[i];
 }
 dfs(1,1);
 vis.clear();
 if(val==0){
  cout<<"YES"<<endl;
  cout<<1<<endl;}
 else{
  bfs(val);
  if(test==true){
   cout<<"YES"<<endl;
   cout<<val<<endl;
   }
  else{
      test=true;
      vis.clear();
      bfs(1);
      if(test==true){
   cout<<"YES"<<endl;
        cout<<1<<endl;
      }
   else{
       long long int val2=0;
      for(auto v:adj[val]){
          if(vect[v-1]!=vect[0]){continue;}
        vis.clear();test=true; bfs(v);if(test==true){val2=v;break;}
      }
     if(test==true){
         cout<<"YES"<<endl;
         cout<<val2<<endl;
     }
  else{
   cout<<"NO"<<endl;} }}}
  
 
 
 
 
 
 
  
 
 
 
    
    
return 0;}