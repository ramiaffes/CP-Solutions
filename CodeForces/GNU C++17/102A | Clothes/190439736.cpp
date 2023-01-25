#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,bool>vis;
bool test=false;
long long int val=0;
map<long long int,vector<long long int>> adj; 
map<long long int,long long int> parent;
map<long long int,long long int> hashage;
 long long int som=0;
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
int main()
{
 fast;
 long long int n,m,a,b;
 cin>>n>>m;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
for(long long int i(0);i<n;i++){
  make_set(i+1);
  }
 for(long long int i(0);i<(m);i++){
  cin>>a>>b;
  adj[a].push_back(b);
  adj[b].push_back(a);}
 long long int ans=1e7;
 for(long long int i(1);i<(n-1);i++){
  for(long long int j(i+1);j<n;j++){
   for(long long int d(j+1);d<=n;d++){
      if((find(adj[j].begin(),adj[j].end(),i)!=adj[j].end())and(find(adj[j].begin(),adj[j].end(),d)!=adj[j].end())and(find(adj[i].begin(),adj[i].end(),d)!=adj[i].end())){
     ans=min(ans,vect[i-1]+vect[j-1]+vect[d-1]);}}}}
 if(ans==1e7)cout<<-1<<endl;
 else cout<<ans<<endl;
 
 
 
 
 
 
 
  
 
 
 
 
 
return 0;}