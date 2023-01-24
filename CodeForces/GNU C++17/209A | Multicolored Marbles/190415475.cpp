#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
long long int som=0;
long long int val=0;
int main()
{
 fast; 
 long long int n,u,v,k;
 cin>>n;vector<long long int >dp(n);
 vector<long long int >dp1(n);
 for(long long int i(0);i<n;i++){
  dp[i]=1;}
 dp1[n-1]=1;
 for(long long int i(n-2);i>=0;i--){
  dp[i]+=(dp1[i+1]%1000000007);
  dp[i]=dp[i]%1000000007 ;
  if((i+2)<n){
  dp1[i]=dp1[i+2];}
  dp1[i]+=(dp[i]%1000000007);
  dp1[i]=dp1[i]%1000000007;
  }
 long long int som=0;
 for(long long int i(0);i<n;i++){
  som+=(dp[i]%1000000007 );}
 cout<<(som%1000000007 )<<endl;
 
 
 
 
 
 
 
return 0;}