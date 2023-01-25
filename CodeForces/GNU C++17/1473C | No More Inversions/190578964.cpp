#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int gcd(long long int a, long long int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
 
int main()
{
 fast; 
 long long int t,n,d,k;
 string s;
 string r;
 cin>>t;
 while(t--){
  cin>>n>>k;
  long long int i=1;
  while(i<(k-(n-k))){
   cout<<i<<" ";
   i++;}
  cout<<k<<" ";
  for(long long int i(k-1);i>=(k-(n-k));i--){
   cout<<i<<" ";}
 cout<<endl;
 }
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}