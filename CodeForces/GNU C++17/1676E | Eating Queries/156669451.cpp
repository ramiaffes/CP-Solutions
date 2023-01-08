#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
int main()
{
 fast;
long long int n,t,q;
cin>>t;
string s;
while(t--){
 cin>>n>>q;
 long long int x;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 sort(vect.begin(),vect.end());
 reverse(vect.begin(),vect.end());
 vector<long long int>dp(n);
 dp[0]=vect[0];
 for(long long int i(1);i<n;i++){
  dp[i]=dp[i-1];
  dp[i]+=vect[i];}
 for(long long int i(0);i<q;i++){
  cin>>x;
  auto it=lower_bound(dp.begin(),dp.end(),x);
  if(it==dp.end()){
   cout<<-1<<endl;}
  else{
   cout<<(it-dp.begin()+1)<<endl;}}}
  return 0;}