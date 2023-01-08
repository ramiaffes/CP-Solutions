#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>dp;
long long int som=0;
int main() 
{
 fast;
 long long int n,m;
 cin>>n>>m;
 vector<long long int>vect(n);
 vector<long long int>vect1(m);
 long long int val=0;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 for(long long int i(0);i<m;i++){
  cin>>vect1[i];}
 vector<vector<long long int>>res(n);
 long long int ans=-1e18;
 for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){
   res[i].push_back(vect[i]*vect1[j]);
   ans=max(ans,vect[i]*vect1[j]);}}
 for(long long int i(0);i<n;i++){
  if(find(res[i].begin(),res[i].end(),ans)!=res[i].end()){
   val=i;break;}
  }
 vect.erase(vect.begin()+val);
 ans=-1e18;
 for(long long int i(0);i<(n-1);i++){
  for(long long int j(0);j<m;j++){
   ans=max(ans,vect[i]*vect1[j]);}}
cout<<ans<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}