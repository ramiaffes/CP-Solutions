#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long int N=1e4;
map<long long int,set<long long int>>adj;
map<pair<long long int,long long int>,long long int>hashing;
map<long long int,bool>vis;
long long int som=0;
long long int som1=0;
 
int main()
{
 fast;
 long long int n,m,u,v;
 cin>>n>>m;
 long long int val1=0;
 long long int val=0;
 long long int som=0;
 set<long long int>se;
 for(long long int i(0);i<m;i++){
  cin>>u>>v;
  adj[u].insert(v);
  adj[v].insert(u);
  if(u>=v)swap(u,v);
  if(hashing[make_pair(u,v)]==0){som++;hashing[make_pair(u,v)]++;}
  if(se.size()<5){
  if((find(se.begin(),se.end(),u)==se.end())and(find(se.begin(),se.end(),v)==se.end())){
  se.insert(v);
  se.insert(u);}
  }}
 bool test=false;
 if(se.size()<=4){
 for(auto v:se){
  if(adj[v].size()==som){test=true;break;}}
 if(test!=true){
 for(auto v:se){
  for(auto v1:se){
   if(v!=v1){
 if((adj[v].size()+adj[v1].size()-(find(adj[v].begin(),adj[v].end(),v1)!=adj[v].end()))==som){test=true;break;}}}}}}
 if(test==false)cout<<"NO"<<endl;
 else cout<<"YES"<<endl;
 
 
return 0;}