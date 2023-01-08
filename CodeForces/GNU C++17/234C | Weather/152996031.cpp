#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=0;
void func(vector<long long int>vect){}
int main()
{
 fast;
 
 long long int n; ifstream I("input.txt");
  ofstream O("output.txt");
 I>>n;
 
 vector<long long int>vect(n);
for(long long int i(0);i<n;i++)I>>vect[i];
vector<long long int>dp(n);
if(vect[0]>=0)dp[0]++;
for(long long int i(1);i<n;i++){
 dp[i]=dp[i-1];
 if(vect[i]>=0)dp[i]++;}
vector<long long int>dp1(n);
if(vect[n-1]<=0)dp1[n-1]++;
for(long long int i(n-2);i>=0;i--){
 dp1[i]=dp1[i+1];
 if(vect[i]<=0)dp1[i]++;}
long long int ans=1e9;
for(long long int i(0);i<(n-1);i++){
 ans=min(ans,dp[i]+dp1[i+1]);}
O<<ans<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}