#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
const long long M=1000000007;
 
int main()
{
 fast;
 long long int n,m,d;
 cin>>n>>m>>d;
 vector<long long int>vect1(m);
 vector<vector<long long int>>vect(n,vect1);
 vector<long long int>res;
 for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){
   cin>>vect[i][j];
   res.push_back(vect[i][j]);}}
bool test=true;sort(res.begin(),res.end());
for(long long int i(0);i<(n*m-1);i++){
 if(abs(res[i]-res[i+1])%d!=0){test=false;break;}
 }
if(test==false){
 cout<<-1<<endl;}
else{
 vector<long long int>dp(n*m);
 for(long long int i(1);i<(n*m);i++){
  dp[i]=dp[i-1];
  dp[i]+=(i)*((res[i]-res[i-1])/d);
  }
 vector<long long int>dp1(n*m);
 for(long long int i(n*m-2);i>=0;i--){
  dp1[i]=dp1[i+1];
  dp1[i]+=((n*m-i-1)*((res[i+1]-res[i])/d));}
 long long int ans=1e9;
 for(long long int i(0);i<(n*m);i++){
  ans=min(ans,dp1[i]+dp[i]);}
 cout<<ans<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}