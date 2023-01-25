#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,pair<long long int,long long int>> hashing; 
map<long long int,bool> hashing1; 
const long int N=1e4;
map<long long int,vector<long long int>>adj;
map<long long int,bool>vis;
long long int som=0;
long long int som1=0;
vector<long long int>vect(N);
void dfs(long long int u,long long int src){
 if(vis[u]==1)return;
 vis[u]=1;som++;
 if(find(vect.begin(),vect.end(),u)!=vect.end()) hashing1[src]=1;
 som1+=adj[u].size();
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs(v,src);
  }
 }
int main()
{
 fast;
 long long int n,m,k,u,v;
 cin>>n>>m>>k;
 vect.resize(k);
 for(long long int i(0);i<k;i++){cin>>vect[i];}
 for(long long int i(0);i<m;i++){
  cin>>u>>v;
  adj[u].push_back(v);
  adj[v].push_back(u);}
 for(long long int i(0);i<n;i++){
  if(vis[i+1]==0){dfs(i+1,i+1);hashing[i+1]=make_pair(som,som1/2);som1=0;som=0;}}
 long long int som3=0;
 long long int val=0;
 long long int max1=0;
 long long int res=0;
 long long int res1=0;
 for(auto v: hashing){
  if(hashing1[v.first]==0){res+=v.second.first;res1+=v.second.second;som3++;}
  else{
   if(v.second.first>=max1){max1=v.second.first;val=v.first;}}}
 if(som3!=0){
 res1+=(som3-1);}
 long long int bh=0;
 if(som3!=0){
 bh+=(som3-1);}
 res+=hashing[val].first;
 res1+=hashing[val].second;
 if((som3!=0)and((hashing[val].first!=0)or(hashing[val].second!=0))){
 res1+=1;
 bh+=1;}
 
 
 for(auto v:hashing){
  if((v.first!=val)and(hashing1[v.first]!=0)){bh+=hashing[v.first].first*(hashing[v.first].first-1)/2-hashing[v.first].second;}}
  bh+=res*(res-1)/2-res1;
 cout<<bh<<endl;
 
 
  
 
 
 
 
 
return 0;}