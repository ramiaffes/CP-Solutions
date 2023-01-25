#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<pair<long long int,long long int>,vector<pair<long long int,long long int>>> adj;
map<pair<long long int,long long int>,bool>vis;
bool test=false;
long long int som=0;
void dfs(pair<long long int,long long int> u,char color,long long int som,map<pair<long long int,long long int>,bool>vis1,map<pair<long long int,long long int>,long long int>mymap,vector<vector<char>>vect){
 if(test==true)return;
 if(vect[u.first-1][u.second-1]!=color)return;
 if(vis1[u]==1){
  if((som+1-mymap[u])>=4){
   test=true;}return;
  }
 else{
  som++;
  mymap[u]=som;
  }
 vis1[u]=1;
 vis[u]=1;
 for(auto v:adj[u]){
  dfs(v,color,som,vis1,mymap,vect);}
}
int main()
{
 fast; 
 long long int n,m;
 cin>>n>>m;
 vector<char>vect1(m);
 vector<vector<char>>vect(n,vect1);
 for(long long int i(0);i<(n);i++){
  for(long long int j(0);j<m;j++){
  cin>>vect[i][j];
 }}
 for(long long int i(1);i<=(n);i++){
  for(long long int j(1);j<=m;j++){
   if(j<m){
   adj[make_pair(i,j)].push_back(make_pair(i,j+1));
   adj[make_pair(i,j+1)].push_back(make_pair(i,j));
   }
   if(i<n){
    adj[make_pair(i,j)].push_back(make_pair(i+1,j));
    adj[make_pair(i+1,j)].push_back(make_pair(i,j));
    }}}
 map<pair<long long int,long long int>,bool>vis1;
 map<pair<long long int,long long int>,long long int>mymap;
 for(long long int i(0);i<n;i++){for(long long int j(0);j<m;j++){
 if(vis[make_pair(i+1,j+1)]==0)dfs(make_pair(i+1,j+1),vect[i][j],0,vis1,mymap,vect);
 if(test==true)break;}}
 if(test==true)cout<<"Yes"<<endl;
 else cout<<"No"<<endl;
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}