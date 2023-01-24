#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<string,set<char>>dp;
bool test=false;
int main()
{
 fast;
 long long int n,d;
 string a,b;
 cin>>n>>d;
 vector<pair<long long int,long long int>>vect(n);
 vector<long long int>vect1(n);
 for(long long int i(0);i<n;i++){cin>>vect[i].first;cin>>vect[i].second;}
 sort(vect.begin(),vect.end());
 vector<long long int>res(n);
 for(long long int i(0);i<n;i++){
  res[i]=vect[i].first;}
 vector<long long int>dp(n);
 dp[0]=vect[0].second;
 for(long long int i(1);i<n;i++){
  dp[i]=dp[i-1];
  dp[i]+=vect[i].second;
  }
long long int ans=0;
for(long long int i(0);i<n;i++){
 auto it=lower_bound(res.begin(),res.end(),res[i]+d);
 long long int val=it-res.begin()-1;
 ans=max(ans,dp[val]-dp[i]+vect[i].second);}
cout<<ans<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}