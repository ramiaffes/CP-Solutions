#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
int main()
{
 fast; 
 long long int n,t;
 cin>>t;
 string s;
 while(t--){
  cin>>n;
  cin>>s;
  long long int som=0;
  vector<long long int>res;
  for(long long int i(0);i<n;i++){
   if(s[i]=='L'){
    som+=i;}
   else som+=(n-i-1);}
  for(long long int i(0);i<n;i++){
   if((s[i]=='L')and(i<(n-i-1))){
    res.push_back(n-i-1-i);}
   else if((s[i]=='R')and(i>(n-i-1))){
    res.push_back(2*i-n+1);}
   else res.push_back(0);}
  sort(res.begin(),res.end());
  vector<long long int>dp(n);
  dp[n-1]=res[n-1];
  for(long long int i(n-2);i>=0;i--){
   dp[i]=dp[i+1];
   dp[i]+=res[i];}
 for(long long int i(n-1);i>=0;i--){
  cout<<(som+dp[i])<<" ";}
 cout<<endl;
  
    
 }
 
 
 
    
    
return 0;}