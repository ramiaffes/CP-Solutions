#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
map<long long int,long long int>adj;
map<long long int,long long int>parent;
const long long int N=1e6;
vector<long long int>vect(N);
map<long long int,bool>vis;
void dfs(long long int u,long long int p){
 if(vis[u]==1)return;
 vis[u]=1;
 vect[p]=u;
 p+=2;
 if(adj[u]==0)return;
 dfs(adj[u],p);
  
 }
int main()
{
 fast; 
 long long int n,a,b;
 cin>>n;
 vect.resize(n);
 long long int val;
 vector<long long int>res;
 vector<long long int>res1;
 for(long long int i(0);i<n;i++){
 cin>>a>>b;
 if(a==0){val=b;} else res1.push_back(a);
 if((a!=0)and(b!=0)){
 adj[a]=b;
 parent[b]=a;}
 }
 dfs(val,1);
 long long int val2;
 for(long long int i(0);i<res1.size();i++){
 if((parent[res1[i]]==0)and(res1[i]!=val)){val2=res1[i];break;}}
 dfs(val2,0);
 for(long long int i(0);i<vect.size();i++)cout<<vect[i]<<" ";
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}