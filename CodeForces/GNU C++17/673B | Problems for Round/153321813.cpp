#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast;
 
 long long int n,m,u,v;
 cin>>n>>m;
 map<long long int,long long int>vis;
 bool test=true;
 for(long long int i(0);i<m;i++){
  cin>>u>>v;
  if(u<v){
   if((vis[u]==1)or(vis[v]==2)){test=false;}
   vis[u]=2;
   vis[v]=1;}
 else{
  if((vis[u]==2)or(vis[v]==1)){test=false;}
  vis[u]=1;
  vis[v]=2;}
  }
if(test==false){
 cout<<0<<endl;}
else{
vector<long long int>res1;
vector<long long int>res2;
for(long long int i(0);i<n;i++){
 if(vis[i+1]==1){
  res1.push_back(i+1);}
 else if(vis[i+1]==2){res2.push_back(i+1);}}
if(res1.size()==0){
 cout<<(n-1)<<endl;}
else{
sort(res1.begin(),res1.end());
sort(res2.begin(),res2.end());
if(res1[0]<res2[res2.size()-1]){
 cout<<0<<endl;}
else{
 cout<<(res1[0]-res2[res2.size()-1])<<endl;}
}}
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}