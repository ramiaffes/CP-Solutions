#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
long long int ans=-1e5;
long long int func(long long int a,long long int m,long long int b,long long int r){
 return (a*r+b)%m;}
long long int som=0;
int main()
{
 fast; 
 long long int a1,b,m,r0;
 cin>>a1>>b>>m>>r0;
 long long int a=r0;
 long long int som=0;
 map<long long int,long long int>hashing;
 map<long long int,bool>vis;
 hashing[a]=0;
 while(vis[a]==0){
  vis[a]=1;
  a=func(a1,m,b,a);
  if(vis[a]==1){som++;break;}
  som++;hashing[a]=som;
  }
 cout<<(som-hashing[a])<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}