#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
 
int main()
{
 fast; 
 long long int t,n,m;
 cin>>t;
 while(t--){
  cin>>n>>m;
  vector<long long int>vect(n);
  map<long long int,long long int>hashing;
  map<long long int,bool>vis;
  long long int som=0;
  for(long long int i(0);i<n;i++)cin>>vect[i];
  for(long long int i(0);i<n;i++){
   vect[i]=vect[i]%m;
   }
  
 for(long long int i(0);i<n;i++){
  hashing[vect[i]]++;}
 for(auto v:hashing){
  if((vis[v.first])or(vis[m-v.first]))continue;
  if((v.first==m-v.first)or(v.first==0))som++;
  else{
   if(hashing[m-v.first]==hashing[v.first])som+=1;
   else if(hashing[v.first]<hashing[m-v.first]){
    som+=(1+hashing[m-v.first]-1-hashing[v.first]);}
   else{
    som+=(1+hashing[v.first]-1-hashing[m-v.first]);}}
  vis[v.first]=1;
  vis[m-v.first]=1;
  }
  cout<<som<<endl;
  }
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}