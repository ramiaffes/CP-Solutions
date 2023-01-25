#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<pair<long long int,long long int>,bool>vis;
map<long long int,vector<long long int>> adj; 
int main()
{
 fast;
 long long int m,a,b;
 cin>>m;
 bool test=false;
 for(long long int i(0);i<m;i++){
  cin>>a>>b;
  if(test==false){
  for(auto v:adj[a]){
   if(find(adj[b].begin(),adj[b].end(),v)!=adj[b].end()){
    test=true;break;}}}
  adj[a].push_back(b);
  adj[b].push_back(a);
  vis[make_pair(a,b)]=1;
  vis[make_pair(b,a)]=1;
  }
 bool test1=false;
 for(long long int i(1);i<=5;i++){
  for(long long int j(1);j<=5;j++){
   for(long long int d(1);d<=5;d++){
    if((i!=j)and(j!=d)and(d!=i)){
     if((vis[make_pair(i,j)]!=1)and(vis[make_pair(i,d)]!=1)and(vis[make_pair(d,j)]!=1)){
      test1=true;break;}}}}
  }
 if((test1==true)or(test==true))cout<<"WIN"<<endl;
 else cout<<"FAIL"<<endl;
 
 
  
 
 
 
 
 
return 0;}