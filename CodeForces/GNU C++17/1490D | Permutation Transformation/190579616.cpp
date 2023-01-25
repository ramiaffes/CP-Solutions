#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long long int N=1e5+5;
vector<long long int>adj[N];
bool vis[N];
long long int res[N];
void func(vector<long long int>L){
 if(L.size()==1){
  return ;}
 else{
  vector<long long int>r(L.begin(),max_element(L.begin(),L.end()));
  vector<long long int>d(max_element(L.begin(),L.end())+1,L.end());
  if(!r.empty()){
  adj[*max_element(L.begin(),L.end())].push_back(*(max_element(L.begin(),max_element(L.begin(),L.end()))));
  func(r);}
  if(!d.empty()){
  adj[*max_element(L.begin(),L.end())].push_back(*max_element(max_element(L.begin(),L.end())+1,L.end()));
  func(d);
  
  }
 }} 
void dfs(long long int u,long long int i){
 if(vis[u])return;
 vis[u]=1;
 res[u]=i;
 i++;
 for(auto v:adj[u]){
  if(vis[v])continue;
  dfs(v,i);}}
int main()
{
 fast; 
 long long int t,n;
 
 
 cin>>t;
 while(t--){
  cin>>n;
  long long int i=0;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];}
  func(vect);
  dfs(*max_element(vect.begin(),vect.end()),i);
  for(long long int i(0);i<(n);i++){
   cout<<res[vect[i]]<<" ";}
  cout<<endl;
  for(long long int i(0);i<N;i++){
   for(long long int j(0);j<adj[i].size();j++){
    adj[i][j]=0;
    }
   }
  for(long long int i(0);i<N;i++){
   vis[i]=0;}
  for(long long int i(0);i<N;i++){
   res[i]=0;}  
  
  
 
  
  
   
  
  
  
  
 
   
  
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}