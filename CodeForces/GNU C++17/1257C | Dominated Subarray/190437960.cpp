#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
 
int main()
{
 fast;
 long long int n,t;
 cin>>t;
 while(t--){map<long long int,bool>vis;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 long long  int som=1;
 vector<long long int>dp(n+1);
 bool test=false;
 for(long long int i(0);i<(n-1);i++){
  if(vect[i]==vect[i+1]){
   test=true;
   som++;
  }}
 if(n<=1){
  cout<<-1<<endl;}
 else if(test==true){
  cout<<2<<endl;}
 else{
  vis[vect[0]]=1;
  long long int ans=1e6;
  for(long long int i(1);i<n;i++){long long int val =dp[vect[i]];
   
   dp[vect[i]]=dp[vect[i-1]];
   dp[vect[i]]++;
   if(vis[vect[i]]==1){
    ans=min(ans,dp[vect[i]]-val+1);
    }vis[vect[i]]=1;
   }
  if(ans==1e6)cout<<-1<<endl;
  else cout<<ans<<endl;
  
  }
 
  
 
 
}
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}