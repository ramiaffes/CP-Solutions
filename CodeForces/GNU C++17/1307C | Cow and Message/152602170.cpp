#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
long long int som=0; 
int main()
{
 fast; 
 long long int t,b;
 string s;
    cin>>s;
    long long int ans=0;
    long long int n=s.length();
    
    for(long long int i(0);i<26;i++){
  for(long long int j(0);j<26;j++){vector<long long int>dp(n);
   long long int som=0;
   if(s[n-1]==(j+97))dp[n-1]++;
   for(long long int d(n-2);d>=0;d--){
    dp[d]=dp[d+1];
    if(s[d]==(j+97)){
     dp[d]++;}}
   for(long long int r(0);r<(n-1);r++){
    if(s[r]==(i+97)){
     som+=dp[r+1];}
    }
   ans=max(ans,som);
   ans=max(ans,dp[0]);
   
   }}
 cout<<ans<<endl;
 
 
    
return 0;}