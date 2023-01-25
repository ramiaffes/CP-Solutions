#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=1e7;
const long int N=1e6;
 
map<long long int,bool>vis;
map<long long int,bool>test;
 
int main()
{
 fast;
   long long int n,m,t,q;
   cin>>n;
   vector<long long int>vect(n);
   for(long long int i(0);i<n;i++)cin>>vect[i];
   vector<long long int>dp(n);
   dp[0]=1;
   for(long long int i(1);i<n;i++){
    dp[i]=dp[i-1];
    if(vect[i]<=2*vect[i-1])dp[i]++;
    else dp[i]=1;}
long long int ans=0;
for(long long int i(0);i<n;i++){
 ans=max(ans,dp[i]);}
cout<<ans<<endl;
   
 
 
                                             
 
   
 
 
 
 
return 0;}