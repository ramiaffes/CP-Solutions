#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int,vector<long long int>>adj;
long long int val=1;
map<long long int,bool>vis;
bool test=true;
map<pair<long long int,long long int>,long long int>hashing;
void dfs(long long int u){
 if(vis[u]==1){return;}
 vis[u]=1;
 for(auto v:adj[u]){ 
    
  if(vis[v]){
   continue;}
  dfs(v);
  
  }}
 
int main()
{
 fast; 
 long long int t,n,k,a,b,c;
 cin>>n;
 vector<pair<long long int,long long int>>vec;
 for(long long int d(0);d<n;d++){
  cin>>a>>b>>c;
  if(a==1){
   for(long long int i(0);i<vec.size();i++){
    if((vec[i].first<b)and(b<vec[i].second)or((c<vec[i].second)and(vec[i].first<c))){
     adj[vec.size()+1].push_back(i+1);
    }
    }
   for(long long int i(0);i<vec.size();i++){
    if((vec[i].first>b)and(vec[i].first<c)or((c>vec[i].second)and(b<vec[i].second))){
     adj[i+1].push_back(vec.size()+1);
     
         
    }
    }
   vec.push_back(make_pair(b,c));
   }
  else{
   dfs(b);
   if(vis[c]==1){
    cout<<"YES"<<endl;
    }
   else{
    cout<<"NO"<<endl;}
   vis.clear();}}
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}