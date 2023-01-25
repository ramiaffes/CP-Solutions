#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,vector<long long int>> adj;
map<long long int ,bool>vis;
map<long long int ,bool>vis1;
bool test=true;
long long int som=0;
void bfs(long long int src,long long int n){
 queue<long long int>q;
 q.push(src);
 while(!q.empty()){
  som=0;
  long long int u=q.front();
  q.pop();
  if(vis[u])continue;
  vis[u]=1;
  for(auto v:adj[u]){
   som+=1;
   if(vis[v])continue;
   q.push(v);}
  if(som!=n){test=false;break;}
  }}
long long int som1=0;
void bfs1(long long int src){
 queue<long long int>q;
 q.push(src);
 while(!q.empty()){
  long long int u=q.front();
  q.pop();
  if(vis1[u])continue;som1+=1;
  vis1[u]=1;
  for(auto v:adj[u]){
   if(vis1[v])continue;
   q.push(v);}
  
  }
 }
int main()
{
 fast; 
 long long int n,m,a,b;
 cin>>n>>m;
for(long long int i(0);i<m;i++){
  cin>>a>>b;
  adj[a].push_back(b);
  adj[b].push_back(a);
}
for(long long int i(0);i<n;i++){
 if(vis[i+1]==0){
  bfs1(i+1);
  bfs(i+1,som1-1);
  som=0;som1=0;
  if(test==false)break;}}
if(test==false)cout<<"NO"<<endl;
else cout<<"YES"<<endl; 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}