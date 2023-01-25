#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,bool>vis;
int main()
{
 fast;
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 vector<long long int>dp(n,1e6);
 vector<long long int>dp1(n,1e6);
 long long int i=0;
 while(vect[i]!=0){
  i++;}
 dp[i]=0;
 for(long long int j(i+1);j<n;j++){
  dp[j]=dp[j-1];
  dp[j]+=1;
  if(vect[j]==0)dp[j]=0;}
  long long int d=n-1;
 while(vect[d]!=0){
  d--;}
 dp1[d]=0;
 for(long long int j(d-1);j>=0;j--){
  dp1[j]=dp1[j+1];
  dp1[j]+=1;
  if(vect[j]==0)dp1[j]=0;}
 for(long long int i(0);i<n;i++){
  cout<<(min(dp[i],dp1[i]))<<" ";}
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}