#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,vector<long long int>>adj;
const long long int N=1e5;
map<long long int,bool>vis;
long long int som=0;
vector<long long int>vect(N);
vector<long long int> res;
void bfs(long long int src){
 queue<long long int >q;
 q.push(src);
 while(!q.empty()){
  long long int u=q.front();
  q.pop();
  if(vis[u])continue;
  vis[u]=1;
  som=0;
  for(auto v:adj[u]){
   if(vis[v])continue;
   if(vect[v-1]==1)som++;
   q.push(v);}
  if((som==adj[u].size())and(vect[u-1]==1))res.push_back(u);
  }}
int main()
{
 fast; 
 long long int n,p,c;
 cin>>n;
 long long int src=0;
 vect.resize(n);
 for(long long int i(0);i<n;i++){
  cin>>p>>c;
  vect[i]=c;
  if(p==-1)src=i+1;
  if(p!=-1){
  adj[p].push_back(i+1);
  }}
 bfs(src);
 if(res.empty())cout<<-1<<endl;
 sort(res.begin(),res.end());
 for(auto v:res)cout<<v<<" ";
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}