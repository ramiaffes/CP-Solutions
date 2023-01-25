#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=1e7;
const long int N=1e6;
map<long long int,long long int>vis;
int main()
{
 fast;
   long long int n,k;
   cin>>n>>k;
   vector<long long int>vect(n);
   for(long long int i(0);i<n;i++)cin>>vect[i];
   vector<long long int>dp(n);
   dp[n-1]=vect[n-1];
   for(long long int i(n-2);i>=0;i--){
    dp[i]=dp[i+1];
    dp[i]+=vect[i];}
long long int ans=1e9;
for(long long int i(0);i<(n-(k-1));i++){
 ans=min(ans,(dp[i]-dp[i+k-1]+vect[i+k-1]));}
long long int var=0;
for(long long int i(0);i<(n-(k-1));i++){
 if((dp[i]-dp[i+k-1]+vect[i+k-1])==ans){
  var=i+1;break;}
 }
cout<<var<<endl;
 
   
 
 
 
 
return 0;}