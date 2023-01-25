#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,vector<long long int>>adj;
const long long int N=1e5;
map<long long int,bool>vis;
long long int som=0;
void dfs(long long int u){
 if(vis[u]==1)return;
 vis[u]=1;
 som++;
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs(v);
  }
 }
int main()
{
 fast; 
 long long int n,p,c;
 string s;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 cin>>s;
 bool test=true;
 for(long long int i(0);i<s.length();i++){
  if(s[i]=='1'){
  adj[vect[i]].push_back(vect[i+1]);
  adj[vect[i+1]].push_back(vect[i]);}}
 for(long long int i(0);i<n;i++){
  if(vis[vect[i]]==0){dfs(vect[i]);
  for(long long int j(i+1);j<(i+1+som);j++){
   if(vis[j]==0){test=false;break;}}}som=0;if(test==false)break;}
 if(test==false)cout<<"NO"<<endl;
 else cout<<"YES"<<endl;
  
  
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}