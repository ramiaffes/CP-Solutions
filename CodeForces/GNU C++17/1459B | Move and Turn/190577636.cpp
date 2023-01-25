#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int power(long long int var,long long int exp){
long long int p=1;
for(long long int i(1);i<=exp;i++){
   p*=var;}
   return p;}
int main()
{
 fast; 
 int t,n;
  cin>>n;
  if(n%2==0){
   cout<<((n/2+1)*(n/2+1))<<endl;}
  else{
   cout<<(((n-1)/2+1)*((n-1)/2+2) *2)<<endl;}
  
  
  
  
  
  
  
 
  
 
 
 
 return 0;
}