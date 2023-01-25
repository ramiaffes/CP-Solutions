#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast;
    long long int n;
    cin>>n;
    vector<long long int>vect(n);
    vector<long long int>dp(n);
    long long int som=0;
    for(long long int i(0);i<n;i++){cin>>vect[i];if(vect[i]==1)som++;}
    if(vect[n-1]==1)dp[n-1]=1;
    for(long long int i(n-2);i>=0;i--){
  dp[i]=dp[i+1];
  if(vect[i]==1)dp[i]++;
  }
 long long int ans=0;
 for(long long int i(0);i<(n);i++){
  for(long long int j(i);j<n;j++){
   ans=max(ans,(som-2*(dp[i]-dp[j]+(vect[j]==1))+(j-i+1)));}}
 cout<<ans<<endl;
  
 
 
 
 
 
return 0;}