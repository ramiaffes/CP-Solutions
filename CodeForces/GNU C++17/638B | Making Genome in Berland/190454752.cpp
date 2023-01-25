#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<char,vector<char>>adj;
const long long int N=100;
map<char,bool>vis;
map<char,long long int>p;
void dfs(char u){
 if(vis[u]==1)return;
 vis[u]=1;
 cout<<u;
 if(adj[u].empty())return;
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs(v);
  }
 }
int main()
{
 fast; 
 long long int n;
 string s;
 cin>>n;
 for(long long int i(0);i<(n);i++){
  cin>>s;
  for(long long int j(0);j<(s.length());j++){
   if(p.find(s[j])==p.end())p[s[j]]=1;}
  for(long long int j(0);j<(s.length()-1);j++){
   if(find(adj[s[j]].begin(),adj[s[j]].end(),s[j+1])==adj[s[j]].end()){
   adj[s[j]].push_back(s[j+1]);
   p[s[j]]++;
   p[s[j+1]]++;
   p[s[j+1]]++;}}
}
for(auto it=p.begin();it!=p.end();it++){
 if(it->second==2)dfs(it->first);
 if(it->second==1)cout<<it->first;}
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}