#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
vector<long long int> adj[N];
bool test=true;
bool vis[N];
void bfs(){
 queue<long long int>q;
 q.push(1);
 while(!q.empty()){
  test=true;
  long long int som=0;
  long long int u=q.front();
  q.pop();
  if((vis[u])or(adj[u].empty()))continue;
  vis[u]=1;
  for(auto v:adj[u]){
   if(vis[v])continue;
   if(adj[v].empty())som++;
   q.push(v);}
  if(som<=2){test=false; break;}}}
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect(n-1);
 for(long long int i(0);i<(n-1);i++){
  cin>>vect[i];}
 for(long long int i(0);i<(n-1);i++){
  adj[vect[i]].push_back(i+2);}
 bfs();
 if(test==true)cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
 
 
 
 
  
 
 
 
 
 
 
return 0;}