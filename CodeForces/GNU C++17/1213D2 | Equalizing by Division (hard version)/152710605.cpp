#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
long long int som=0; 
int main()
{
 fast; 
 long long int n,k;
 cin>>n>>k;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){cin>>vect[i];}
 map<long long int,vector<long long int>>vis;
 for(long long int i(0);i<n;i++){long long int som=0;
  while(vect[i]!=0){
  vis[vect[i]].push_back(som);
  som++;
  vect[i]/=2;
  }
  vis[0].push_back(som);}
 long long int ans=1e9;
 for(auto v:vis){
  if(vis[v.first].size()<k){
   continue;}
  else{
   sort(vis[v.first].begin(),vis[v.first].end());
   long long int val=0;
   for(long long int i(0);i<k;i++){
    val+=vis[v.first][i];}
   ans=min(ans,val);}}
  cout<<ans<<endl;
 
 
 
    
return 0;}