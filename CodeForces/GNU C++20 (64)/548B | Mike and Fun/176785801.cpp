#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<set<long long int>,long long int>dp;
map<long long int,long long int>hashing;
 
int main()
{
 fast; 
 long long int n,m,q,i,j;
 cin>>n>>m>>q;
 vector<long long int> vect2(m);vector<long long int>dp1(n);
 vector<vector<long long int>>vect(n,vect2);
 for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){
   cin>>vect[i][j];}}
 for(long long int i(0);i<n;i++){
 vector<long long int>dp(m);
  if(vect[i][0]==1)
  dp[0]+=1;
  for(long long int d(1);d<m;d++){
   if(vect[i][d]==0){
    dp[d]=0;}
   else{
    dp[d]=dp[d-1];
    dp[d]+=1;}}
  dp1[i]=0;
  for(long long int d(0);d<m;d++){
   dp1[i]=max(dp1[i],dp[d]);}}
 
 for(long long int i1(0);i1<q;i1++){
  cin>>i>>j;
  i--;
  j--;
  vect[i][j]=1-vect[i][j];
  vector<long long int>dp(m);
  if(vect[i][0]==1)
  dp[0]+=1;
  for(long long int d(1);d<m;d++){
   if(vect[i][d]==0){
    dp[d]=0;}
   else{
    dp[d]=dp[d-1];
    dp[d]+=1;}}
  dp1[i]=0;
  for(long long int d(0);d<m;d++){
   dp1[i]=max(dp1[i],dp[d]);}
  long long int ans=0;
  for(long long int d(0);d<n;d++){
   ans=max(ans,dp1[d]);}
 cout<<ans<<endl;
  }
 
 
   
 
  
  
  
 
 
  
  
 
 
 
 
 
 
    
return 0;} 