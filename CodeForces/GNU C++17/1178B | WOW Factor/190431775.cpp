#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,bool>vis;
int main()
{
 fast;
 string s;
 cin>>s;
 long long int n=s.length();
 vector<long long int>dp(n);
 vector<long long int>dp1(n);
 dp[0]=0;
 for(long long int i(1);i<n;i++){
  dp[i]=dp[i-1];
  if((s[i-1]==s[i])and(s[i]=='v')){
   dp[i]++;
   }
  }
dp1[n-1]=0;
for(long long int i(n-2);i>=0;i--){
 dp1[i]=dp1[i+1];
 if((s[i+1]==s[i])and(s[i]=='v')){
  dp1[i]++;}}
long long int som=0;
for(long long int i(0);i<n;i++){
 if(s[i]=='o'){
  som+=dp1[i]*dp[i];}}
cout<<som<<endl;
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}