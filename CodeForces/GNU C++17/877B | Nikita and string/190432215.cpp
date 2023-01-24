#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
map<string,long long int>hashing1;
int main()
{
 fast;
 string s;
 cin>>s;
 long long int som1=0;
 long long int som2=0;
 long long int n=s.length();
 for(long long int i(0);i<n;i++){
  if(s[i]=='a'){
   som1++;}
  else{som2++;}}
 vector<pair<long long int,long long int>>dp(n);
 vector<pair<long long int,long long int>>dp1(n);
 if(s[0]=='a'){
  dp[0].first++;}
if(s[0]=='b'){
 dp[0].second++;}
for(long long int i(1);i<n;i++){
 dp[i]=dp[i-1];
 if(s[i]=='a'){
  dp[i].first++;}
else{dp[i].second++;}}
 if(s[n-1]=='a'){
  dp1[n-1].first++;}
if(s[n-1]=='b'){
 dp1[n-1].second++;}
for(long long int i(n-2);i>=0;i--){
 dp1[i]=dp1[i+1];
 if(s[i]=='a'){
  dp1[i].first++;}
else{dp1[i].second++;}}
long long int ans=1e6;
for(long long int i(0);i<(n-1);i++){
 for(long long int j(i+1);j<n;j++){
  ans=min(ans,dp[i].second+dp1[j].second+som1-dp[i].first-dp1[j].first);}}
ans=min(ans,som1);
ans=min(ans,som2);
for(long long int i(0);i<(n-1);i++){
 ans=min(ans,dp[i].first+dp1[i+1].second);}
for(long long int i(0);i<(n-1);i++){
 ans=min(ans,dp1[i+1].first+dp[i].second);}
 cout<<(n-ans)<<endl;
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}