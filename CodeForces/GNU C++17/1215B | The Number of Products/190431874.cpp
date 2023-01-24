#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int ans=1e4;
map<long long int,long long int>hashing;
map<long long int,long long int>hashing1;
int main()
{
 fast;
 long long int t,k, n,m,x,y;
 string s;
 cin>>n;
 vector<long long int>vect(n);
 vector<pair<long long int,long long int>>dp(n);
 long long int p=1;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
if(vect[0]>0)dp[0].first++;
else dp[0].second++;
for(long long int i(1);i<n;i++){
 if(vect[i]>0){
  dp[i].first=dp[i-1].first;
  dp[i].second=dp[i-1].second;
  dp[i].first++;}
 else{
  dp[i].first=dp[i-1].second;
  dp[i].second=dp[i-1].first;
  dp[i].second++;
  }}
long long int som1=0;
long long int som2=0;
for(long long int i(0);i<n;i++){
 som1+=dp[i].first;
 som2+=dp[i].second;}
cout<<som2<<" "<<som1<<endl;
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}