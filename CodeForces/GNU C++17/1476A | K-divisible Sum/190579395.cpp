#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int t,n,k;
 string s;
 cin>>t;
 while(t--){
  cin>>n>>k;
  if(k>=n){
  if(k%n!=0){
  cout<<(k/n+1)<<endl;}
 else{
  cout<<(k/n)<<endl;}}
 else{
  if(n%k==0){
   if((n/k*k)%n!=0){
  cout<<((n/k*k)/n+1)<<endl;}
 else{
  cout<<((n/k*k)/n)<<endl;}
   }
  else{
   if(((n/k+1)*k)%n!=0){
  cout<<(((n/k+1)*k)/n+1)<<endl;}
 else{
  cout<<(((n/k+1)*k)/n)<<endl;}
   }}
   
  
  
  
  
  
  
 
   
  
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}