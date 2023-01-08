#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int,vector<long long int>>adj;
long long int val=1;map<long long int ,vector<long long int>>res1;
void dfs(long long int u){
    res1[val].push_back(u);
 if(adj[u].size()==0){val++;return;}
 for(auto v:adj[u]){
  dfs(v);}}
int main()
{
 fast; 
 long long int t,n,k,a,b;
 cin>>t;
 while(t--){
 cin>>n;
 long long int root=0;
 for(long long int i(0);i<n;i++){cin>>a;if(a==(i+1)){root=a;}else {adj[a].push_back(i+1);}}
 dfs(root);
 cout<<res1.size()<<endl;
 for(auto v:res1){
  cout<<v.second.size()<<endl;
  for(auto v1:v.second){
   cout<<v1<<" ";}
  cout<<endl;
  }
 adj.clear();res1.clear();
 }
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}