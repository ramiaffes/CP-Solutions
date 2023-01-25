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
   long long int n,k;
   cin>>n>>k;
  if(k==0){
   cout<<n<<endl;
   for(long long int i(1);i<=n;i++)cout<<i<<" ";}
  else if(n<=k){
    cout<<1<<endl;
    cout<<1<<endl;}
 else{
 vector<long long int>dp(n);
 vector<long long int>res;
 dp[0]=0;
 for(long long int i(1);i<n;i++){
  dp[i]=dp[i-1];
  dp[i]++;
  if(dp[i]==k){
   res.push_back(i+1);
   }
  if(dp[i]==(2*k)){
   dp[i]=-1;}
  }
 if((dp[n-1]<k)and(dp[n-1]!=-1))res.push_back(n);
 cout<<res.size()<<endl;
 for(auto v:res){if(((v!=(n))and(dp[n-1]<k)and(dp[n-1]!=-1)))cout<<(v-(k-dp[n-1]))<<" ";
  else cout<<v<<" ";}
}
 
 
 
 
   
 
 
 
 
return 0;}