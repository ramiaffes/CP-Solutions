#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=1e7;
const long int N=1e6;
vector<long long int>dp(N);
 void remplir(long long int i){
   ans=1e7;
   stringstream ss;
  ss << i;
string str = ss.str();
   if(i==0)return;
   if(str.length()==1){dp[i]=1;return;}
   else{
    dp[i]=1e6;
   for(long long int j(0);j<str.length();j++){
    if(str[j]!='0'){
   if(dp[i-(str[j]-48)]==0){remplir(i-(str[j]-48));}
   dp[i]=min(dp[i],1+dp[i-(str[j]-48)]);}}
  }
}
int main()
{
 fast;
   long long int t;
   long long int n;
   cin>>n;
  remplir(n);
  cout<<dp[n]<<endl;
  
 
 
 
 
return 0;}