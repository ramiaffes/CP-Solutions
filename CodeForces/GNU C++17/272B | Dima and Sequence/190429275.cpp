#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
map<long long int,long long int>dp;
const long long M=1000000007;
void f(long long int x){
 if(x==0)return ;
 if(x%2==1){
  if(dp[x-1]==0) f(x-1);
  dp[x]=dp[x-1]+1;}
 else{
  if(dp[x/2]==0)f(x/2);
  dp[x]=dp[x/2];}}
int main()
{
 fast;
 long long int n;
 string s;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 sort(vect.begin(),vect.end());
 for(long long int i(0);i<n;i++){
  f(vect[i]);
  vect[i]=dp[vect[i]];}
map<long long int,long long int>hashing;
for(long long int i(0);i<vect.size();i++){
 hashing[vect[i]]++;}
 long long int som=0;
for(auto v:hashing){
 som+=(v.second-1)*(v.second)/2;}
cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}