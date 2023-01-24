#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
map<long long int,long long int>dp;
const long long M=1000000007;
int main()
{
 fast;
 long long int k;
 string s;
 string s1;
 cin>>s;
 long long int n=s.length();
 vector<bool>vec(n);
 vector<vector<bool>>dp(n,vec);
 for(long long int i(n-1);i>=0;i--){
 for(long long int j(i);j<n;j++){
  if((j==i)or(j==(i+1))){
   if(s[i]==s[j]){
    dp[i][j]=true;}}
  else{
  if((s[i]==s[j])and(dp[i+1][j-1]==true)){
   dp[i][j]=true;}
  }}
}
long long int som=0;
vector<long long int>dp1(n);
vector<long long int>dp2(n);
for(long long int i(0);i<n;i++){
 for(long long int j(i);j<n;j++){
 dp1[i]+=dp[i][j];}}
for(long long int j(0);j<n;j++){
for(long long int i(j);i>=0;i--){
 dp2[j]+=dp[i][j];}}
for(long long int i(0);i<(n-1);i++){
 for(long long int j(i+1);j<n;j++){
  som+=dp2[i]*dp1[j];}}
cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}