#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int prime(long long int n){
 for(long long int i(2);i<=sqrt(n);i++){
  if(n%i==0)return false;}
 return true;}
int main()
{
 fast; 
 long long int t,n,d,k;
 cin>>t;
 while(t--){
  cin>>d;
  long long int a=1+d;
  while(!prime(a)){
   a++;}
  long long int b=a+d;
  while(!prime(b)){
   b++;}
  
 
   
  cout<<(a*b)<<endl;
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}