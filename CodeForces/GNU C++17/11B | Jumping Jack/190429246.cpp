#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
const long long M=1000000007;
long long int gcd(long long int a, long long int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main()
{
 fast;
 long long int x;
 string s;
 cin>>x;
 long long int i=0;
 while((i*(i+1))/2<abs(x)){
  i++;}
if((i*(i+1))/2==abs(x)){
 cout<<i<<endl;}
else{
 if(abs(x)%2!=((i*(i+1)/2)%2)){
  i++;
  if(i%2==0)i++;
  cout<<i<<endl;}
 else{
  
  cout<<i<<endl;}
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}