#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int,vector<long long int>>adj;
map<long long int,bool>vis;
map<long long int,bool>res1;
map<long long int,bool>res2;vector<long long int>vect(N);
long long int ans1=0;
long long int ans=1e9;
void dfs1(long long int u){
 if(vis[u]==1)return;
 vis[u]=1;
 ans=min(ans,u);
 ans1=max(ans1,u);
 for(auto v:adj[u]){
  if(vis[v]){
   continue;}
  dfs1(v);}}
int main()
{
 fast; 
 long long int n,m,t,u,v,a,b;
 cin>>n>>m;
 for(long long int i(0);i<m;i++){
  cin>>a>>b;
  adj[a].push_back(b);
  adj[b].push_back(a);
  }
 vector<pair<long long int,long long int>>res;
 for(long long int i(0);i<n;i++){
  if(vis[i+1]==0){dfs1(i+1);res.push_back(make_pair(ans,ans1));ans1=0;ans=1e9;}}
  sort(res.begin(),res.end());
  long long int ans=0;
  long long int ans1=0;
 long long int som=0;
 for(long long int i(0);i<(res.size());i++){
  if(ans<res[i].first){
   ans=res[i].second;
   ans1=res[i].first;}
  else{
   som++;
   ans=max(ans,res[i].second);}
  }
 cout<<som<<endl;
 
 
  
 
 
 
    
    
return 0;}