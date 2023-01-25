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
   long long int n,w,h;
   cin>>n;
   vector<long long int >dp(n);
   vector<long long int >dp1(n);
   vector<long long int>vect(n);
   vector<long long int>vect1(n);
   long long int som=0;
   for(long long int i(0);i<n;i++){
    cin>>w>>h;
    vect[i]=w;
    vect1[i]=h;
    som+=w;
    }
  dp[0]=vect1[0];
 for(long long int i(1);i<n;i++){
  dp[i]=max(dp[i-1],vect1[i]);}
dp1[n-1]=vect1[n-1];
for(long long int i(n-2);i>=0;i--){
 dp1[i]=max(dp1[i+1],vect1[i]);}
cout<<(dp1[1]*(som-vect[0]))<<" ";
for(long long int i(1);i<(n-1);i++){
 cout<<((max(dp[i-1],dp1[i+1]))*(som-vect[i]))<<" ";}
cout<<(dp[n-2]*(som-vect[n-1]))<<endl;
   
   
 
 
   
 
 
 
 
return 0;}