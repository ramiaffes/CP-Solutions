#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 long long int n,l;
 string s;
 cin>>n;
 vector<pair<long long int,long long int>>dp(n);
 vector<long long int>dp1(n);
 for(long long int i(0);i<n;i++){
  cin>>l;
 vector<long long int>vect(l);
 dp[i].second=1e9;
 long long int ans=1e9;
  for(long long int j(0);j<l;j++){
   cin>>vect[j];
   if(ans<vect[j])dp1[i]=1;
   ans=min(ans,vect[j]);
   dp[i].first=max(dp[i].first,vect[j]);
   dp[i].second=min(dp[i].second,vect[j]);}
 
 }
long long int som=0;
vector<pair<long long int,long long int>>dp3;
long long int val=dp.size();
for(long long int i(n-1);i>=0;i--){
 if(dp1[i]==1){
 som+=2*(val)-1;
 val--;
 }
 else{
  dp3.push_back(dp[i]);}
 }
vector<long long int>res;
vector<long long int>res1;
for(auto v:dp3){
 res.push_back(v.second);
 res1.push_back(v.first);}
sort(res1.begin(),res1.end());
sort(res.begin(),res.end());
auto it=res1.begin();
for(long long int i(0);i<res.size();i++){
  it=upper_bound(it,res1.end(),res[i]);
 som+=(dp3.size()-(it-res1.begin()));
 }
cout<<som<<endl;
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}