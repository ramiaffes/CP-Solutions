#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<string,vector<string>>adj;
map<string ,string>res;
map<string,bool>vis;
long long int som=0;
void dfs(string u,long long int cnt,long long int n){
 if(cnt==n-1){if(res[u]=="a")som++;return;}
 cnt++;
 if(adj[u].empty()){return;}
 for(auto v:adj[u]){
  dfs(v,cnt,n);
  }}
 
int main()
{
 fast; 
 long long int n,q;
 cin>>n>>q;
 vector<string>vect(q);
 string b;
 for(long long int i(0);i<q;i++){
  cin>>vect[i]>>b;
  res[vect[i]]=b;}
 for(long long int j(0);j<q;j++){
 for(long long int i(0);i<q;i++){
  if((find(adj[vect[j]].begin(),adj[vect[j]].end(),vect[i])==adj[vect[j]].end())and(vect[i].substr(0,1)==res[vect[j]]))
  adj[vect[j]].push_back(vect[i]);}
 }
 for(long long int j(0);j<q;j++){
  dfs(vect[j],1,n);}
 cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
  
 
  
  
  
  
  
  
 
 
 
  
  
  
  
 
  
  
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}