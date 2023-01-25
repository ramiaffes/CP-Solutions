#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,long long int> parent;
map<long long int,long long int> adj;
map<long long int,long long int>hashing;
 map<long long int,vector<long long int>>mymap;
 map<long long int,bool>vis;
void make_set(long long int  v) {
    parent[v] = v;
}
 
long long int find_set(long long int v) {
    if (v == parent[v])
        return v;
    return(find_set(parent[v]));
}
 
void union_sets(long long int a, long long int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b){
        parent[b] = a;
    }
}
void dfs(long long int u,long long int r){
 if(vis[u]==1)return;
 vis[u]=1;
 mymap[r].push_back(u);
 if(adj[u]==0)return;
 dfs(adj[u],r);
  }
 
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  make_set(i+1);
  }
 vector<long long int>vect1(vect.begin(),vect.end());
 sort(vect1.begin(),vect1.end());
 for(long long int i(0);i<n;i++){
  hashing[vect1[i]]=i+1;}
 for(long long int i(0);i<n;i++){
  vect[i]=hashing[vect[i]];}
 for(long long int i(0);i<n;i++){
  union_sets(i+1,vect[i]);
  adj[i+1]=vect[i];}
 for(long long int i(0);i<n;i++){
  if(parent[i+1]==i+1){
   dfs(i+1,i+1);}}
 cout<<mymap.size()<<endl;
 for(auto it=mymap.begin();it!=mymap.end();it++){
  long long int val=(it->second).size();
  cout<<val<<" ";
  for(long long int j(0);j<val;j++){
   cout<<(it->second)[j]<<" ";}
  cout<<endl;
  }
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}