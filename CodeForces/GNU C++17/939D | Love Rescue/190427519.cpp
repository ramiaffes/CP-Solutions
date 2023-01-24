#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<char,set<char>>adj;
vector<pair<char,char>>res;
map<char,bool>vis;
void dfs(char u){
 if(vis[u]==1)return;
 vis[u]=1;
 for(auto v:adj[u]){
  if((vis[v]))continue;
  res.push_back(make_pair(u,v));
  dfs(v);
  }
 }
int main()
{
 fast;
 long long int q,n,b,l,r;
 string s,s1;
 cin>>n;
 cin>>s;
 cin>>s1;
 for(long long int i(0);i<n;i++){
  adj[s[i]].insert(s1[i]);
  adj[s1[i]].insert(s[i]);}
 for(long long int i(0);i<26;i++){
 char var=i+97;
  if(vis[var]==0)dfs(var);}
 cout<<res.size()<<endl;
 for(long long int i(0);i<res.size();i++){
  cout<<res[i].first<<" "<<res[i].second<<endl;}
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}