#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long long int N=1e7+5;
vector<long long int>adj(N);
vector<long long int >result;
bool vis[N];
void dfs(long long int u){
 if(vis[u])return ;
 vis[u]=1;
 if(vis[adj[u]])return;
 result.push_back(u);
 dfs(adj[u]);}
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect(n-1);
 for(long long int i(0);i<(n-1);i++){
  cin>>vect[i];}
 for(long long int i(0);i<(n-1);i++){
 adj[i+2]=vect[i];}
 dfs(n);
 reverse(result.begin(),result.end());
 for(auto v:result){
  cout<<v<<" ";}
 
 
  
 
 
 
 
 
 
return 0;}