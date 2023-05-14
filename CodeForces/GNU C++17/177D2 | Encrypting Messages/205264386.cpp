#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int n,m,c;
 cin>>n>>m>>c;
 vector<long long int>vect(n);
  for(long long int i(0);i<n;i++)cin>>vect[i];
 vector<long long int>vect1(m);
 for(long long int i(0);i<m;i++)cin>>vect1[i];
 vector<long long int>dp(m);
  vector<long long int>dp1(m);
 dp[0]=vect1[0];
 for(long long int i(1);i<m;i++){
 dp[i]=dp[i-1];
 dp[i]+=(vect1[i])%c;
}
dp1[m-1]=vect1[m-1];
for(long long int i(m-2);i>=0;i--){
 dp1[i]=dp1[i+1];
 dp1[i]+=(vect1[i])%c;
 }
for(long long int i(0);i<n;i++){
    if((i<(m-1))and(i>=(n-m+1))){
    vect[i]+=(dp1[0]-dp1[i+1]-dp[m+i-n-1])%c;}
    else if(i<(m-1)){
        vect[i]+=(dp1[0]-dp1[i+1])%c;
    }
    else if (i>=(n-m+1)){
        vect[i]+=(dp1[0]-dp[m+i-n-1])%c;
        
    }
    else vect[i]+=(dp1[0]%c);
 vect[i]%=c;}
for(auto v:vect)cout<<v<<" ";
cout<<endl;
 
 
 
 
 
 
 
 
return 0;}