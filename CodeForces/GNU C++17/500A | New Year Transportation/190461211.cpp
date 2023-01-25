#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
vector<long long int> adj(N);
bool vis[N];
void dfs(long long int u){
 vis[u]=1;
 if(vis[adj[u]]==1)return;
 dfs(adj[u]);}
int main()
{
 fast; 
 long long int n,t;
 cin>>n>>t;
 vector<long long int>vect(n-1);
 for(long long int i(0);i<(n-1);i++){
  cin>>vect[i];
  adj[i+1]=vect[i]+i+1;}
 dfs(1);
 if(vis[t]==1)cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}