#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
vector<string>vect(N);
map<pair<long long int,long long int>,pair<long long int,long long int>>adj;
map<pair<long long int,long long int>,bool>vis;
bool test=true;
long long int val=0;
long long int val1=0;
void dfs(pair<long long int,long long int> u,long long int n,long long int m){
	if(vis[u]==1){test=false;return;}
	vis[u]=1;
  if(vect[u.first][u.second]=='U'){
    if(u.first==0){val=u.first+1;val1=u.second+1;return;}
   adj[u]=make_pair(u.first-1,u.second);
  }
  else if(vect[u.first][u.second]=='D'){
     if(u.first==n-1){val=u.first+1;val1=u.second+1;return;}
    adj[u]=make_pair(u.first+1,u.second);
  }
  else if(vect[u.first][u.second]=='L'){
  if(u.second==0){val=u.first+1;val1=u.second+1;return ;}
    adj[u]=make_pair(u.first,u.second-1);
    
  }
  else{
   if(u.second==m-1){val=u.first+1;val1=u.second+1;return ;}
    adj[u]=make_pair(u.first,u.second+1); }
	dfs(adj[u],n,m);}
 
int main()
{
	fast;	
	long long int n,m,t,u,v;
	cin>>n>>m;
 vect.resize(n);

  for(long long int i(0);i<n;i++){
  cin>>vect[i];}
  dfs(make_pair(0,0),n,m);
  if(test==false){
  cout<<-1<<endl;}
  else{
  cout<<val<<" "<<val1<<endl;}
	
		
	
	
	
    
    
return 0;}