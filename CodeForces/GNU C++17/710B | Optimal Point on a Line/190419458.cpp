#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
long long int som=0;
long long int val=0;
long long int power(long long int k,long long int n){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
 
 
 
int main()
{
 fast; 
 long long int n,k,x;
 
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  }
sort(vect.begin(),vect.end());
vector<long long int>dp(n);
dp[0]=vect[0];
for(long long int i(1);i<n;i++){
 dp[i]=dp[i-1];
 dp[i]+=vect[i];}
long long int ans=1e18;
for(long long int i(0);i<n;i++){
 ans=min(ans,(i+1)*vect[i]-dp[i]+abs((n-i-1)*vect[i]-(dp[n-1]-dp[i])));
 }
for(long long int i(0);i<n;i++){
 if(ans==((i+1)*vect[i]-dp[i]+abs((n-i-1)*vect[i]-(dp[n-1]-dp[i])))){
  cout<<vect[i];break;}}
 
 
 
 
 
 
 
 
return 0;}