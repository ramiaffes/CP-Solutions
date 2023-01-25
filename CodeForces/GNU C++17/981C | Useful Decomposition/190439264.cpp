#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long int N=1e4;
long long int ans1=1e4;vector<long long int>vect(N);
map<long long int,vector<long long int>>adj;
long long int cost=0;
long long int cost1=1e7;
map<long long int,bool>vis;
vector<pair<long long int,long long int>>res;
vector<long long int>res1;
long long int n;
bool test=true;
long long int som2=0;
void dfs(long long int u,long long int som,long long int src,long long int som2){
 if(vis[u]==1){return;}
 vis[u]=1;
 som2=0;
 if((adj[u].size()>=3)and(u!=src)){som++;}
 if(som==2){test=false;return;}
 if((adj[u].size()==1)and(u!=src)){
  res.push_back(make_pair(src,u));}
 for(auto v:adj[u]){ 
  if(vis[v])continue;
  som2++;
  if((som2>=2)){src=u;}
  dfs(v,som,src,som2);
  }
 }
 
int main()
{
 fast;
 long long int m,u,v;
 cin>>n;
 for(long long int i(0);i<(n-1);i++){
  cin>>u>>v;
  adj[u].push_back(v);
     adj[v].push_back(u);}
    for(long long int i(0);i<n;i++){
  if(adj[i+1].size()==1){
   dfs(i+1,0,i+1,0);break;}}
    if(test==false)cout<<"No"<<endl;
    else{cout<<"Yes"<<endl; cout<<res.size()<<endl;
  for(auto v:res){
   cout<<v.first<<" "<<v.second<<endl;}
   }
return 0;}