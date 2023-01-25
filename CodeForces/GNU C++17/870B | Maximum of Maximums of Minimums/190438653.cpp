#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char ,long long int >hashing;
map<char ,long long int >hashing1;
 
int main()
{
fast;
long long int n,k;
cin>>n>>k;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++)cin>>vect[i];
if(k>2){
 cout<<(*max_element(vect.begin(),vect.end()))<<endl;}
else if(k==2){
 long long int ans=-1e9;
 vector<long long int>dp(n);
 vector<long long int>dp1(n);
 dp[0]=vect[0];
 for(long long int i(1);i<n;i++){
  dp[i]=min(dp[i-1],vect[i]);}
 dp1[n-1]=vect[n-1];
 for(long long int i(n-2);i>=0;i--){
  dp1[i]=min(dp1[i+1],vect[i]);}
 for(long long int i(0);i<(n-1);i++){
  ans=max(ans,max(dp[i],dp1[i+1]));}
 cout<<ans<<endl;
 }
else{
 cout<<(*min_element(vect.begin(),vect.end()))<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}