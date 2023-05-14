#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int,set<long long int>>adj;
map<long long int,bool>vis;
map<long long int,long long int>hashing;
map<long long int,long long int>hashing1;
long long int som=0;
long long int val=1;
void dfs(long long int u){
 if(vis[u]==1)return;
 vis[u]=1;
 hashing1[u]=val;
 som++;
 for(auto v:adj[u]){ 
  if(vis[v]){
   continue;}
  
  dfs(v);
  
  }}
 
int main()
{
 fast; 
 long long int n,m,k;
 cin>>n>>m;
  val=1;
 hashing.clear();
 bool test=false;
 hashing1.clear();
 vector<long long int>res1(n);
 for(int i=0;i<m;i++){
  cin>>k;
  int a=-1;
  int b=-1;
  if(k==n){test=true;break;}
  for(int j=0;j<k;j++){
      b=a;
   cin>>a;
       if((a!=-1)and(b!=-1)){
   adj[b].insert(a);
  
   adj[a].insert(b);}
  }
  }
 if(test==true){
     for(int i=0;i<n;i++)cout<<n<<" ";
     cout<<endl;
     return 0;
 }
 for(int i=0;i<n;i++){
  if(vis[i+1]==0){
   dfs(i+1);
   hashing[val]=som;
   val++;
   som=0;
   }}
 for(int i=0;i<n;i++)cout<<hashing[hashing1[i+1]]<<" ";
 cout<<endl;
  
return 0;}