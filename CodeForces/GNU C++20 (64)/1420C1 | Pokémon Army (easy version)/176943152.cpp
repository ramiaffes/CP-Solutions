#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
vector<char>res;
long long int N=1000;
int main()
{
 fast;
 long long int n,q,t;
cin>>t;
while(t--){
 cin>>n>>q;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 vector<long long int>dp(n);
 vector<long long int>dp1(n);
 vector<long long int>dp2(n);
 dp[n-1]=vect[n-1];
 dp1[n-1]=vect[n-1];
 dp2[n-1]=vect[n-1];
 for(long long int i(n-2);i>=0;i--){
  dp[i]=max(vect[i],vect[i]-dp1[i+1]);
  dp1[i]=min(dp1[i+1],min(vect[i],vect[i]-dp2[i+1]));
  dp2[i]=max(dp2[i+1],dp[i]);}
cout<<dp2[0]<<endl;
 
 
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}