#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int ,vector<long long int>>adj;
map<long long int,bool>vis;
map<long long int,long long int>ty;
map<long long int,long long int>ty1;
map<long long int,bool>vis1;
long long int som=0;
map<long long int ,vector<pair<long long int,long long int>>>m;
void dfs(int u,int cur_ty){
 ty[u]=cur_ty;
 vis[u]=1;
 for(auto v:adj[u]){
  if(vis[v]){
   if(ty[u]==ty[v]){som++;}
   continue;}
  dfs(v,1-cur_ty);}}
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
  if(vis[i+1]==0)dfs(i+1,0);}
 if(n%2==0){
 cout<<(som/2+(((som/2)%2!=0)))<<endl;}
 else{
     cout<<(som/2+(((som/2)%2!=1)))<<endl;
 }
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}