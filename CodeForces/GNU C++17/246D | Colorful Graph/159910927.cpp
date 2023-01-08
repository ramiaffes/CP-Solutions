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
bool test=true;
void dfs(long long int u){
 if(vis[u]==1)return;
 vis[u]=1;
 for(auto v:adj[u]){ 
    
  if(vis[v]){
   continue;}
  dfs(v);
  
  }}
int main()
{
 fast; 
 long long int n,t,u,v,a,b,m1;
 cin>>n>>m1;
 vect.resize(n);
 for(long long int i(0);i<(n);i++){
  cin>>vect[i];
 }
 vector<pair<long long int,long long int>>m23;
 for(long long int i(0);i<m1;i++){
  cin>>a>>b;
  adj[a].push_back(b);
  adj[b].push_back(a);
  if(vect[a-1]!=vect[b-1]){
  m[vect[a-1]].insert(vect[b-1]);
  m[vect[b-1]].insert(vect[a-1]);}
 }
 long long int ans=0;
 for(auto v:m){
     long long int val=v.second.size();
  ans=max(ans,val);}
 vector<pair<long long int,long long int>>vect21;
 for(auto v:m){
     vect21.push_back(make_pair(v.first,v.second.size()));
 }
 sort(vect21.begin(),vect21.end());
 sort(vect.begin(),vect.end());
 if(ans==0){cout<<vect[0]<<endl;}
 else{
 for(auto v:vect21){
  if(ans==v.second){
   cout<<v.first<<endl;break;}}}
 
 
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}