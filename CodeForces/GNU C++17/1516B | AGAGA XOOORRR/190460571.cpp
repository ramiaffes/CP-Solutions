#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int n,t;
 cin>>t;
 while(t--){
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 long long int som=0;
 for(long long int i(0);i<n;i++){
  som^=vect[i];}
 if(som==0)cout<<"YES"<<endl;
 else {
  bool test=false;
  long long int dp[n][n];
  for(long long int i(0);i<(n-1);i++){
  dp[i+1][i+1]=vect[i+1];}
  dp[2][n-1]=som^vect[0]^vect[1];
  dp[0][0]=vect[0];
  for(long long int i(0);i<(n-2);i++){
   for(long long int j(i+1);j<(n-1);j++){
    if((dp[i+1][j]==dp[j+1][n-1])and(dp[0][i]==dp[i+1][j])){
     test=true;break;}
    if((j+1)<(n-1)){
    dp[i+1][j+1]=dp[i+1][j]^vect[j+1];}
    if((j+2)<(n-1)){
    dp[j+2][n-1]=dp[j+1][n-1]^vect[j+1];}
    }
    if(test==true)break;
    if ((i+1)<(n-2)){
    dp[0][i+1]=dp[0][i]^vect[i+1];}}
  if(test==true)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  }}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}