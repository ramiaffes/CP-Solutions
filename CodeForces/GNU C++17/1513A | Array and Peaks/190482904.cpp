#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int t;
 long long int n;
 long long int a;
 long long int k;
 long long int kh;
 cin>>t;
 for(long long int d(1);d<=t;d++){
  cin>>n>>k;
  if(n<(2*k+1)){
   cout<<(-1)<<endl;}
  else{
   for(long long int i(0);i<(k);i++){
    cout<<(i+1)<<" "<<(n-i)<<" ";}
  for(long long int i(k);i<(n-k);i++){
   cout<<(i+1)<<" ";}
  cout<<endl;
   }
  
  
 
 }
   
  
  
  
  
  
  
     
  
  
  
 
  
  
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}