#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
map<string,long long int>hashing1;
int main()
{
 fast;
 long long int n,m;
 cin>>n>>m;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 sort(vect.begin(),vect.end());
 vector<long long int>rh(m+1);
 vector<long long int>dp(n);
 dp[0]=vect[0];
 rh[0]+=vect[0];
 for(long long int i(1);i<n;i++){
  dp[i]=dp[i-1];
  dp[i]+=rh[(i)%(m)];
  rh[(i)%(m)]+=vect[i];
  dp[i]+=vect[i]; }
for(long long int i(0);i<n;i++)cout<<dp[i]<<" ";
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}