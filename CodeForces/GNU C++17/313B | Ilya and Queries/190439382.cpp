#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast;
    long long int m,l,r;
    string s;
    cin>>s;
    cin>>m;
    vector<long long int>dp(s.length());
    for(long long int i(s.length()-2);i>=0;i--){
  dp[i]=dp[i+1];
  if(s[i]==s[i+1])dp[i]+=1;}
   for(long long int i(0);i<m;i++){
  cin>>l>>r;
  cout<<(dp[l-1]-dp[r-1])<<endl;}
  
 
 
 
 
 
return 0;}