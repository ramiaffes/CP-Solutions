#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=1e7;
const long int N=1e6;
 
map<long long int,bool>vis;
map<long long int,bool>test;
 
int main()
{
 fast;
   long long int n,m;
   cin>>n>>m;
   vector<long long int>vect1(m);
   vector<vector<long long int>>vect(n,vect1);
   for(long long int i(0);i<n;i++){
    for(long long int j(0);j<m;j++){
     cin>>vect[i][j];}}
 vector<long long int>dp1(m);
   vector<vector<long long int>>dp(n,dp1);
   vector<long long int>dp2(m);
   vector<vector<long long int>>dp3(n,dp2);
   for(long long int i(0);i<n;i++){
    if(vect[i][0]==1)
    dp[i][0]=1;
    for(long long int j(1);j<m;j++){
     dp[i][j]=dp[i][j-1];
     if(vect[i][j]==1)dp[i][j]=1;
     }}
   for(long long int i(0);i<n;i++){
    if(vect[i][m-1]==1)
    dp3[i][m-1]=1;
    for(long long int j(m-2);j>=0;j--){
     dp3[i][j]=dp3[i][j+1];
     if(vect[i][j]==1)dp3[i][j]=1;
     }}
vector<long long int>dp4(m);
  vector<vector<long long int>>dp5(n,dp4);
  for(long long int i(0);i<m;i++){
    if(vect[n-1][i]==1)
    dp5[n-1][i]=1;
    for(long long int j(n-2);j>=0;j--){
     dp5[j][i]=dp5[j+1][i];
     if(vect[j][i]==1)dp5[j][i]=1;
     }}
vector<long long int>dp6(m);
  vector<vector<long long int>>dp7(n,dp6);
  for(long long int i(0);i<m;i++){
    if(vect[0][i]==1)
    dp7[0][i]=1;
    for(long long int j(1);j<n;j++){
     dp7[j][i]=dp7[j-1][i];
     if(vect[j][i]==1)dp7[j][i]=1;
     }}
long long int som=0;
    for(long long int i(0);i<m;i++){
   for(long long int j(0);j<n;j++){
    if((vect[j][i]==0)){
     
     if(dp5[j][i]==1){som++;}}
    if ((vect[j][i]==0)){
     
    if(dp7[j][i]==1){som++;}
    }
   if ((vect[j][i]==0)){
    
    if(dp3[j][i]==1){som++;}
    }
  if ((vect[j][i]==0)){
   
    if(dp[j][i]==1){som++;}
    }
   }}
 cout<<som<<endl;
 
 
                                             
 
   
 
 
 
 
return 0;}