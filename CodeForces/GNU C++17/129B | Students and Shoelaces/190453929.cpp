#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,vector<long long int>>adj;
vector<long long int>result;
map<long long int ,bool> vis1;
int main()
{
 fast; 
 long long int n,m,a,b;
 cin>>n>>m;
 for(long long int i(0);i<m;i++){
  cin>>a>>b;
  adj[a].push_back(b);
  adj[b].push_back(a);}
 long long int res=0;
 long long int som=0;
 bool test=true;
  while(test==true){
   test=false;
  
  for(long long int i(0);i<n;i++){
   som=0;
   if(vis1[i+1]!=1){
   for(auto v:adj[i+1]){
    if(vis1[v]!=1) som++;}
  if(som==1){test=true;result.push_back(i+1);}}}
 if(test==true)res++;
 for(long long int i(0);i<result.size();i++){
  vis1[result[i]]=1;
  }
 result.clear();
}
 cout<<res<<endl;
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}