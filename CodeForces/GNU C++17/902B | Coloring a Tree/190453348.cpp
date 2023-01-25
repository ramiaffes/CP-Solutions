#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
vector<long long int> adj[N];
 vector<long long int>vect1(N);
 vector<long long int>result(N);
bool vis[N];
long long int som=0;
void dfs(long long int u,long long int val){
 if(vis[u]==1)return;
 vis[u]=1;
 if(val!=vect1[u-1]){som++;val=vect1[u-1];}
 if(adj[u].empty())return;
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs(v,val);
  }}
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vect1.resize(n);
 vector<long long int>vect(n-1);
 for(long long int i(0);i<(n-1);i++){
  cin>>vect[i];
  adj[vect[i]].push_back(i+2);}
 for(long long int i(0);i<(n);i++){
  cin>>vect1[i];}
 dfs(1,0);
 cout<<som<<endl;
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}