#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
vector<long long int> adj[N];
 
long long int max1=1;
bool vis[N];
void dfs(long long int u,long long int level){
 vis[u]=1;
 if(adj[u].empty())return;
 level+=1;
 for(auto v:adj[u]){
  dfs(v,level);
  if(max1<=level){
   max1=level;}
  }}
int main()
{
 fast; 
 long long int  n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 for(long long int i(0);i<n;i++){
  if(vect[i]!=-1){
   adj[vect[i]].push_back(i+1);}}
 long long int level=1;
 for(long long int i(0);i<n;i++){
  if((vect[i]!=-1)){
   if(vis[vect[i]]!=1){
   level=1;
   dfs(vect[i],level);
   }}}
 cout<<max1<<endl;
 
 
 
 
 
 
  
   
  
    
  
  
  
  
 
 
   
  
  
  
  
  
  
 
 
   
  
  
  
  
  
  
     
  
  
  
 
  
  
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}