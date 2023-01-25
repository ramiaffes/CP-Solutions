#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=1e7;
const long int N=1e6;
 
 
int main()
{
 fast;
   long long int n,b;
   cin>>n>>b;
   vector<long long int>vect(n);
   for(long long int i(0);i<n;i++)cin>>vect[i];  
   vector<long long int>dp(n);
   vector<long long int>dp1(n);
   if(vect[0]%2==0)dp[0]++;
   else dp1[0]++;
    for(long long int i(1);i<n;i++){
  dp[i]=dp[i-1];
  if(vect[i]%2==0)dp[i]++;}
 
     for(long long int i(1);i<n;i++){
  dp1[i]=dp1[i-1];
  if(vect[i]%2==1)dp1[i]++;}
 vector<long long int>res;
 for(long long int i(1);i<(n-1);i++){
  if(dp1[i]==dp[i]){
   res.push_back(abs(vect[i+1]-vect[i]));}}
 sort(res.begin(),res.end());
 if(res.empty())cout<<0<<endl;
 else{
 long long int som=0;
 long long int i=0;
 while((i<=res.size())and(som<=b)){
  som+=res[i];
  i++;}
 cout<<(i-1)<<endl;}
 
 
 
 
return 0;}