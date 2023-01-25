#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,bool>vis;
map<char,vector<char>>adj;
int main()
{
fast;
long long int n;
cin>>n;
vector<long long int>vect(n);
long long int som=0;
for(long long int i(0);i<n;i++){cin>>vect[i];som+=vect[i];}
vector<long long int>dp(n);
vector<long long int>dp1(n);
dp[0]=vect[0];
for(long long int i(1);i<(n);i++){
 dp[i]=dp[i-1];
 dp[i]+=vect[i];}
dp1[n-1]=vect[n-1];
for(long long int i(n-2);i>=0;i--){
 dp1[i]=dp1[i+1];
 dp1[i]+=vect[i];
 }
long long int ans=1e6;
if(n==1){
 cout<<vect[0]<<endl;}
else{
for(long long int i(0);i<(n-1);i++){
 ans=min(ans,abs(dp[i]-dp1[i+1]));}
for(long long int i(0);i<(n-1);i++){
 for(long long int j(i+1);j<n;j++){
 ans=min(ans,abs(som-2*(dp[i]+dp1[j])));}}
cout<<ans<<endl;
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}