#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int  n,k;
 cin>>n>>k;
 if(k==0){
  cout<<n<<" ";
  for(long long int d(1);d<n;d++){
   cout<<d<<" ";}}
 else if(k==n){
  cout<<-1<<endl;}
 else if((n-k)%2==0){  
  for(long long int i(0);i<(n-k);i++){
   if(i%2==0)
   cout<<(i+2)<<" ";
   else cout<<(i)<<" ";
   }
  for(long long int i(n-k);i<n;i++){
   cout<<(i+1)<<" ";}}
 else{
   for(long long int i(0);i<(k+1);i++){
   cout<<(i+1)<<" ";}
   for(long long int i(k+1);i<n;i++){
   if(i%2==((k+1)%2))
   cout<<(i+2)<<" ";
   else cout<<(i)<<" ";
   }
  }
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}