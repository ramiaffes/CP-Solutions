#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast;
 long long int n,m,t,e;
 cin>>t;  
 bool prime[1000000 + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= 1e6; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= 1e6; i += p)
                prime[i] = false;
        }
    }prime[1]=false;
 while(t--){
 cin>>n>>e;
 vector<long long int>vect(n);
 long long int som1=0;
  
 for(long long int i(0);i<n;i++)cin>>vect[i];
 for(long long int i(0);i<e;i++){
  vector<long long int>dp((n-i-1)/e+1);
  vector<long long int>dp1((n-i-1)/e+1);
  long long int val=0;
  long long int val1=0;
  dp[0]=(vect[i]==1);
  for(long long int j(1);j<=((n-i-1)/e);j++){
   if(vect[j*e+i]==1){
    dp[j]=dp[j-1]+1;}
  else{
   dp[j]=0;}
   
 }
 dp1[(n-i-1)/e]=(vect[i+((n-i-1)/e)*e]==1);
 for(long long int j((n-i-1)/e-1);j>=0;j--){
   if(vect[j*e+i]==1){
    dp1[j]=dp1[j+1]+1;}
  else{
   dp1[j]=0;}
  }
 for(long long int j(0);j<=((n-i-1)/e);j++){
  if(prime[vect[j*e+i]]){
   val=0;
   val1=0;
   if(j>=1){
    val=dp[j-1];}
   if(j<((n-i-1)/e)){
    val1=dp1[j+1];}
   som1+=(val+1)*(val1+1)-1;
   }}
 
 
  }
 
cout<<som1<<endl;
 
 
  
  
}
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}