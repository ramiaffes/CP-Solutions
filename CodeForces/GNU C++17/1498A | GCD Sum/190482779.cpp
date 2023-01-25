#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int gcd(long long int a, long long int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
long long int som(long long int n){
 long long int som=0;
  while(n>0){
   som+=n%10;
   n=n/10;}
  return som;}
int main()
{
 fast; 
 long long int t;
 long long int n,c;
 cin>>t;
 
 for( int d(1);d<=t;d++){
  cin>>n;
  long long int n1=n;
  
  while(gcd(n1,som(n1))==1){
   n1++;}
  cout<<n1<<endl;
  
  
  
     
  
  
  
 
  
  
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}
 