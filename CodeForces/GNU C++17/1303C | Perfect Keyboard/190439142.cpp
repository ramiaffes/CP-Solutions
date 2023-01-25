#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long int N=1e4;
map<char,set<char>>adj;
map<char,bool>vis;
long long int som=0;
long long int som1=0;
 
void dfs(char u){
 if(vis[u]==1)return;
 vis[u]=1;
 cout<<u;
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs(v);
  }
 }
int main()
{
 fast;
 long long int n,m,k,u,v,t;
 string s;
 cin>>t;
 while(t--){
  cin>>s;
  for(long long int i(0);i<(s.length()-1);i++){
   adj[s[i]].insert(s[i+1]);
   adj[s[i+1]].insert(s[i]);
   vis[s[i]]=1;
   vis[s[i+1]]=1;
   }
  long long int var=97;
  long long int som=0;
  long long int som2=0;
  long long int som1=0;
  char val;
  for(long long int i(0);i<26;i++){
   char d=(char)(var+i);
   if(adj[d].size()==2){som++;}
   if(adj[d].size()==1){val=d;som1++;}
  if(vis[d]==1)som2++;}
  if(s.length()==1)val=s[0];
 if(((som==(som2-2))and(som1==2))or(s.length()==1)){
  cout<<"YES"<<endl;
  vis.clear();
  dfs(val);
  long long int var=97;
  for(long long int i(0);i<26;i++){
   char d=(char)(var+i);
   if(vis[d]==0)cout<<d;}
  cout<<endl;}
 else{
  cout<<"NO"<<endl;}
 
 
  
 
 vis.clear();
 adj.clear();
 
}
 
return 0;}