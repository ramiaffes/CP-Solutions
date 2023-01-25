#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<long long int ,vector<long long int>>adj;
vector<long long int>vect(N);
vector<long long int>vect1(N);
map<long long int ,bool>vis;
map<long long int ,bool>vis1;
vector<long long int>res;
void dfs(long long int u,int cur_ty,long long int etat,long long int etat1){
 if(vis[u]==1)return;
 if(cur_ty==0){
  if(etat==0){
  if(vect1[u-1]!=vect[u-1]){
   vect1[u-1]=vect[u-1];
   res.push_back(u);
   etat=1-etat;}}
  else{
   if(vect1[u-1]!=(1-vect[u-1])){
   vect1[u-1]=vect[u-1];
   res.push_back(u);
   etat=1-etat;}
   }}
  else{
   if(etat1==0){
  if(vect1[u-1]!=vect[u-1]){
   vect1[u-1]=vect[u-1];
   res.push_back(u);
   etat1=1-etat1;}}
  else{
   if(vect1[u-1]!=(1-vect[u-1])){
   vect1[u-1]=vect[u-1];
   res.push_back(u);
   etat1=1-etat1;}
   }}
 vis[u]=1;
 
 if(adj[u].empty())return;
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs(v,1-cur_ty,etat,etat1);
  }}
int main()
{
 fast; 
 long long int n,x,y;
 cin>>n;
 vect.resize(n);
 vect1.resize(n);
 for(long long int i(1);i<n;i++){
  cin>>x>>y;
  adj[x].push_back(y);
  adj[y].push_back(x);
  }
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 for(long long int i(0);i<n;i++){
  cin>>vect1[i];}
 dfs(1,0,0,0);
 cout<<res.size()<<endl;
 for(long long int i(0);i<res.size();i++){
  cout<<res[i]<<endl;}
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}