#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<long long int ,vector<long long int>>adj;
map<long long int,long long int>hashage;
map<long long int,long long int>hashage1;
map<long long int ,bool>vis;
map<long long int,long long int>tin;
map<long long int,long long int>tout;
long long int timer=0;
long long int som=0;
void dfs(long long int u){
 if(vis[u]==1)return;
 vis[u]=1;
 tin[u]=timer++;
 if(adj[u].empty())return;
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs(v);
  }
  tout[u]=timer++;}
bool isancestor(long long int u,long long int v){
 return (tin[u]<=tin[v]) and (tout[u]>=tout[v]);}
int main()
{
 fast; 
 long long int n,a,b;
 cin>>n;
 for(long long int i(1);i<(n-1)*n/2;i++){
  cin>>a>>b;
  hashage[a]++;
  hashage[b]++;
  adj[a].push_back(b);
  hashage1[b]++;
  }
 long long int val1=0;
 long long int val2=0;
 long long int val3=0;
 long long int cnt=0;
 bool test=false;
 for(auto v:hashage){
  if((v.second==(n-2))and(cnt==0)){val1=v.first;cnt++;}
  else if((v.second==(n-2))and(cnt==1)){val2=v.first;break;}}
 for(long long int v(1);v<=n;v++){
  if(hashage1[v]==0){
   val3=v;break;}}
 if(val3==0){
  cout<<val2<<" "<<val1<<endl;}
 else{
  dfs(val3);
  if(isancestor(val2,val1)){
   cout<<val2<<" "<<val1<<endl;}
  else if(isancestor(val1,val2)){
   cout<<val1<<" "<<val2<<endl;}
  else{
   for(auto v:adj[val1]){
    if(find(adj[v].begin(),adj[v].end(),val2)!=adj[v].end()){test=true;break;}}
   if(test==true)cout<<val1<<" "<<val2<<endl;
   else cout<<val2<<" "<<val1<<endl;
   }}
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}