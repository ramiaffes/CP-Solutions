#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int,vector<long long int>>adj;
map<long long int,bool>vis1;
long long int som=0;
long long int n=0;
int main()
{
 fast; 
 long long int m,u,v;
 cin>>n;
 vector<long long int>vect(n);
 map<long long int,long long int>hashing;
 map<long long int,long long int>vis;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  }
 long long int ans=1e9;
 long long int ans1=1e9;
 long long int ans2=0;
 vector<long long int>res;
 res.push_back(1);
 hashing[vect[0]]++;
 vis[hashing[vect[0]]]++;
 if(n>=2){
     res.push_back(2);
      if(vis[hashing[vect[1]]]!=0){
         vis[hashing[vect[1]]]--;
         if(vis[hashing[vect[1]]]==0){
             vis.erase(hashing[vect[1]]);
             vis.erase(0);
         }
     }
     hashing[vect[1]]++;
     vis[hashing[vect[1]]]++;
 }
 for(long long int i(2);i<n;i++){
     if(vis[hashing[vect[i]]]!=0){
         vis[hashing[vect[i]]]--;
         if(vis[hashing[vect[i]]]==0){
             vis.erase(hashing[vect[i]]);
             vis.erase(0);
         }
     }
  hashing[vect[i]]++;
  vis[hashing[vect[i]]]++;
  vis.erase(0);
  ans=1e9;
  ans1=1e9;
  ans2=0;
  if(vis.size()==1){
      for(auto v:vis){
          if((v.first==1)or(v.first==(i+1))){
              res.push_back(i+1);
          }
      }
  }
  else if(vis.size()==2){
      long long int res1=0;
      long long int res2=0;
      for(auto v:vis){
          if(res1==0){
              res1=v.first;
          }
          else{
              res2=v.first;
          }
      }
     if(((vis[res1]==1)and((res1==(res2+1))or(res1==1)))or((vis[res2]==1)and((res2==(res1+1))or(res2==1)))){
         res.push_back(i+1);
     }
  }
  
 
 
 
 
 }
 cout<<res[res.size()-1]<<endl;
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}