#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
long long int gcd(long long int a,long long int b){
 if((b==0))return a;
 return gcd(b,a%b);}
int main()
{
 fast; 
 long long int t,n,q,k;
 cin>>t;
 while(t--){
 cin>>n>>q;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 vector<long long int>dp(n);
 dp[0]=vect[0];
 for(long long int i(1);i<n;i++){
  dp[i]=dp[i-1];
  dp[i]+=vect[i];}
 vector<long long int>dp1(n);
 dp1[0]=vect[0];
 for(long long int i(1);i<n;i++){
  dp1[i]=dp1[i-1];
  dp1[i]=max(dp1[i],vect[i]);}
 for(long long int i(0);i<q;i++){
  cin>>k;
  auto it=upper_bound(dp1.begin(),dp1.end(),k);
  long long int val=it-dp1.begin()-1;
  if(val<0)cout<<0<<" ";
 else cout<<dp[val]<<" ";
  
  }cout<<endl;
 
}
 
 return 0;}