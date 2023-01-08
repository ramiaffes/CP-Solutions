#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
int main()
{
 fast; 
 long long int n,t;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 vector<long long int>dp(n);map<long long int,long long int>hashing;
 long long int res=0;
 dp[0]=vect[0];
 hashing[dp[0]]++;
 
 map<long long int,long long int>m;
 for(long long int i(1);i<n;i++){
  dp[i]=dp[i-1];
  dp[i]+=vect[i];
  hashing[dp[i]]++;
  if(dp[i]%2==0)
  m[i]=hashing[dp[i]/2];
  else m[i]=-1e11;}
 vector<long long int>dp1(n);
 dp1[n-1]=vect[n-1];
 for(long long int i(n-2);i>=0;i--){
  dp1[i]=dp1[i+1];
  dp1[i]+=vect[i];}
 for(long long int i(1);i<(n-1);i++){
  
  if((dp[i]%2==0)and(dp1[i+1]==(dp[i]/2))){
   if(m[i]==-1e11)continue;
   if(dp[i]==0){res+=m[i]-1;}
   else res+=m[i];
   }}
 cout<<res<<endl;
 
    
    
return 0;}