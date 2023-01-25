#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long long int N=1e7+5;map<long long int,long long int> parent;
bool vis[N];
void dfs(long long int u){
 if(vis[u])return ;
 vis[u]=1;
 if((vis[parent[u]]))return;
 dfs(parent[u]);}
 
void make_set(long long int  v) {
    parent[v] = v;
}
 
long long int find_set(long long int v) {
    if (v == parent[v])
        return v;
    return find_set(parent[v]);
}
 
void union_sets(long long int a, long long int  b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}
  
int main()
{
 fast; 
 long long int n,m;
 cin>>n>>m;vector<vector<long long int>>vect1(n);
 vector<long long int>k(n);
 for(long long int i(0);i<n;i++){
  cin>>k[i];
  vector<long long int>vect(k[i]);
  for(long long int j(0);j<k[i];j++){
   cin>>vect[j];
   make_set(vect[j]);}
  vect1[i]=vect;}
 for(long long int i(0);i<n;i++){
  for(long long int j(0);j<(k[i]-1);j++){
   union_sets(vect1[i][j],vect1[i][j+1]);}}
 long long int cnt=0;
 long long int s=0;
 set<long long int>se;
 for(long long int i(n-1);i>=0;i--){
  if(k[i]==0)cnt++;
    for(long long int r(k[i]-1);r>=0;r--){
  s=find_set(vect1[i][r]);
  if(find(se.begin(),se.end(),s)==se.end()){
   cnt++;
   se.insert(s);}
  }}
if(se.empty())cout<<cnt<<endl;
else cout<<(cnt-1)<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}