#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
int main()
{
 fast;
 long long int n,t,k;
 string a,b;
 cin>>a;
 cin>>b;
 vector<long long int>dp(b.length());
 if(b[0]=='1')dp[0]++;
 for(long long int i(1);i<b.length();i++){
  dp[i]=dp[i-1];
  if(b[i]=='1')dp[i]++;}
 vector<long long int>dp1(b.length());
 if(b[b.length()-1]=='1')dp1[b.length()-1]++;
 if(b.length()>=2){
 for(long long int i(b.length()-2);i>=0;i--){
  dp1[i]=dp1[i+1];
  if(b[i]=='1')dp1[i]++;}}
 long long int som=0;
 for(long long int b1(0);b1<a.length();b1++){
  long long int val=dp[b.length()-1];
  if(b1>=1){
   val-=dp[b1-1];}
  if((b.length()-(a.length()-b1-1))<b.length()){
   val-=dp1[b.length()-(a.length()-b1-1)];}
  if(a[b1]=='1'){som+=(b.length()-(a.length()-b1-1)-b1)-val;}
  else som+=val;
  }
 cout<<som<<endl;
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}