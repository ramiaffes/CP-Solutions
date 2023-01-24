#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
long long int gcd(long long int a, long long int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main()
{
 fast;
 long long int n,t;
 cin>>t;
 while(t--){
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 long long int ans=0;
 long long int ans1=0;
 for(long long int i(0);i<(n-1);i++){
  for(long long int j(i+1);j<n;j++){
    ans=max(ans,vect[i]+vect[j]);}}
   
 cout<<ans<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
return 0;}