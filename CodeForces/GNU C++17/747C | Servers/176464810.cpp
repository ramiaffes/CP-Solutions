#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
 fast; 
 long long int n,q,t,k,d;
cin>>n>>q;map<long long int,long long int>hashing;
map<long long int,bool>vis;
for(long long int i(0);i<q;i++){
 cin>>t>>k>>d;
 vector<long long int>res;
 for(long long int j(0);j<n;j++){
  if(t>hashing[j]){
   vis[j]=0;}}
 
 for(long long int j(0);j<n;j++){
  if(vis[j]==0){
   res.push_back(j);
   }
  if(res.size()==k)break;
  }
 long long int som=0;
 if(res.size()!=k){
  cout<<-1<<endl;}
 else{
  for(auto v:res){
   hashing[v]=t+d-1;
   vis[v]=1;}
 for(auto v:res){som+=(v+1);}
 cout<<som<<endl;}
}
 
 
 
  
  
  
 
 
  
  
 
 
 
 
 
 
    
return 0;} 