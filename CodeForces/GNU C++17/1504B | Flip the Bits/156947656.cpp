#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
int main(){
 fast;
 long long int n,t;
 string s;
 string s2;
 cin>>t;
 while(t--){
 cin>>n;
 cin>>s;
 cin>>s2;
 vector<pair<long long int,long long int>>dp(n);
 if(s[0]=='1'){
 dp[0]=make_pair(0,1);}
 else{
  dp[0]=make_pair(1,0);}
 for(long long int i(1);i<n;i++){
  dp[i]=dp[i-1];
  if(s[i]=='1'){
   dp[i].second++;}
  else dp[i].first++;}
 bool test1=true;
 int test=0;
 for(long long int i(n-1);i>=0;i--){
  if(test==1){
   if(s2[i]!=(1-(s[i]-'0')+'0')){
    if(dp[i].first!=dp[i].second){test1=false;break;}
    test=1-test;
    }
   }
  else{
   if(s2[i]!=s[i]){
    if(dp[i].first!=dp[i].second){test1=false;break;}
    test=1-test;
    }}
 
  }
 if(test1==true){
  cout<<"YES"<<endl;}
 else cout<<"NO"<<endl;
 
}
 return 0; } 