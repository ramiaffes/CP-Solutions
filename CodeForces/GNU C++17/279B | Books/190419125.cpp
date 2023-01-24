#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<string,set<char>>dp;
bool test=false;
int main()
{
 fast;
 long long int n,t;
 string a,b;
 cin>>n>>t;
 vector<long long int>vect(n);
 long long int som=0;
 for(long long int i(0);i<n;i++){cin>>vect[i];som+=vect[i];}
 vector<long long int>dp(n);
 dp[0]=vect[0];
 for(long long int i(1);i<n;i++){
  dp[i]=dp[i-1];
  dp[i]+=vect[i];}
long long int ans=0;
for(long long int i(0);i<n;i++){
 if(i>=1){
 auto it=upper_bound(dp.begin()+i,dp.end(),t+dp[i-1]);
 long long int val=it-(dp.begin()+i);
 ans=max(ans,val);}
 else{
  auto it=upper_bound(dp.begin()+i,dp.end(),t);
 long long int val=it-(dp.begin()+i);
 ans=max(ans,val);}}
cout<<ans<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}