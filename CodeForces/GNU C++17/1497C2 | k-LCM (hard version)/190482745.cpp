#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int t;
 cin>>t;
 while(t--){
  long long int n,k;
  cin>>n>>k;
  if((n-k+3)%2==1){
   cout<<((n-k+3)-1)/2<<" "<<((n-k+3)-1)/2<<" "<<1<<" ";}
  else if ((n-k+3)%4==2){
   cout<<((n-k+3)-2)/2<< " "<<((n-k+3)-2)/2<<" "<<2<<" "; }
  else{
   cout<<((n-k+3)/4)<<" "<<((n-k+3)/4)<<" "<<((n-k+3)/2)<<" ";}
  for(long long int i(4);i<=k;i++){
   cout<<1<<" ";}
  cout<<endl;
  
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}