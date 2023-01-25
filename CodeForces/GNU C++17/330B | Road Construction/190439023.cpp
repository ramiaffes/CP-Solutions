#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,bool>vis;
map<long long int,vector<long long int>> adj; 
int main()
{
 fast;
 long long int m,n,a,b;
 cin>>n>>m;
 for(long long int i(0);i<m;i++){
  cin>>a>>b;
  vis[a]=1;
  vis[b]=1;}
 long long int val=0;
 for(long long int i(1);i<=n;i++){
  if(vis[i]!=1){val=i;break;}}
 cout<<(n-1)<<endl;
 for(long long int i(1);i<=n;i++){
  if(i!=val)cout<<val<<" "<<i<<endl;}
  
 
 
 
  
 
 
 
 
 
return 0;}