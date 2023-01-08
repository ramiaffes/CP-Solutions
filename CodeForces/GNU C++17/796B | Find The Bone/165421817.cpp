#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
long long int ans=-1e5;
 
long long int som=0;
int main()
{
 fast; 
 long long int n,k,u,v,m;
 cin>>n>>m>>k;
 vector<long long int>vect(m);
 map<long long int,bool>vis;
 for(long long int i(0);i<m;i++){
  cin>>vect[i];
  vis[vect[i]]=1;
 }
 long long int val=1;
 bool test=false;
 for(long long int i(0);i<k;i++){
  if(vis[val]==1){test=true;}
  cin>>u>>v;
  if(test==true)continue;
  if(u==val){
   val=v;}
  else if(v==val){
      val=u;
  }
  }
 cout<<val<<endl;
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}