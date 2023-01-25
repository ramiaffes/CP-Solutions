#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,vector<long long int>> adj;
map<long long int,bool>vis;
bool test=false;
void remplir(long long int a,long long int b){
 if(test==true)return;
 if(a>=b){if(a==b){test=true;}return;}
 adj[a].push_back(2*a);
 adj[a].push_back(10*a+1);
 for(auto v:adj[a]){
   remplir(v,b);}}
void dfs(long long int u,vector<long long int>result,long long int b){
 if(vis[u])return;
 vis[u]=1;
 result.push_back(u);
 if(u==b){
  cout<<"YES"<<endl;
  cout<<result.size()<<endl;
  for(long long int i(0);i<result.size();i++){
   cout<<result[i]<<" ";}
  return;}
 if(adj[u].empty())return;
 for(auto v:adj[u]){
  dfs(v,result,b);
  }}
 
int main()
{
 fast; 
 long long int  a,b;
 cin>>a>>b;
 vector<long long int>result;
 remplir(a,b);
 
 if(test==false){
  cout<<"NO"<<endl;}
 else{dfs(a,result,b);}
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}