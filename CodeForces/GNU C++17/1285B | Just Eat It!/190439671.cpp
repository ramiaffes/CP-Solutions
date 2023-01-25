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
   long long int n,m,t;
   cin>>t;
   while(t--){
    cin>>n;
    vector<long long int>vect(n);
    long long int som=0;
    for(long long int i(0);i<n;i++){cin>>vect[i];som+=vect[i];}
    vector<long long int>dp(n);
    vector<long long int>dp1(n);
    long long int ans=-1e9;
    dp[n-1]=vect[n-1];
    ans=max(ans,vect[n-1]);
    bool test=false;
    for(long long int i(n-2);i>=0;i--){
     if(dp[i+1]<=0){test=true;dp[i+1]=0;}
     dp[i]=dp[i+1];
     dp[i]+=vect[i];
     if((i==0)and(test==false))break;
     ans=max(ans,dp[i]);
     }
    dp1[0]=vect[0];
    ans=max(ans,vect[0]);
     bool test1=false;
    for(long long int i(1);i<n;i++){
     if(dp1[i-1]<=0){test1=true;dp1[i-1]=0;}
     dp1[i]=dp1[i-1];
     dp1[i]+=vect[i];
     if((i==(n-1))and(test1==false))break;
     ans=max(ans,dp1[i]);
     }
    if(som>ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
 
 
                                             
 
   
 
 
 
 
return 0;}