#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e6;
map<long long int,vector<long long int>>adj;
map<long long int,bool>vis;
map<long long int ,vector<long long int>>res;
long long int som=0;
void remplir(){
 for(long long int i(1);i<=N;i++){
  long long int i1=i;
  long long int u=1;
  while(i1!=0){
   if((i1%10)!=0)u*=i1%10;
   i1/=10;}
  adj[u].push_back(i);
  }
 
}
void dfs(long long int u,long long int k){
 res[k].push_back(u);
 if(vis[u]==1)return;
 vis[u]=1;
 if(adj[u].empty())return;
 for(auto v:adj[u]){
  if((vis[v]))continue;
  dfs(v,k);
  }
 }
 
int main()
{
 fast; 
 long long int q,l,r,k;
 cin>>q;
 remplir();
 for(long long int i(1);i<=9;i++){
  dfs(i,i);
  sort(res[i].begin(),res[i].end());}
 for(long long int i(0);i<q;i++){
  cin>>l>>r>>k;
  auto val=lower_bound(res[k].begin(),res[k].end(),l);
  auto val2=upper_bound(res[k].begin(),res[k].end(),r);
  cout<<(val2-val)<<endl;
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
  
 
  
  
  
  
  
  
 
 
 
  
  
  
  
 
  
  
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}