#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
 long long int n;
 long long int t;
 cin>>t;
 while(t--){
 cin>>n;
 if(n==2){
  cout<<-1<<endl;}
 else if((n%3)==0){
   cout<<n/3<<" "<<0<<" "<<0<<endl;}
 else if ((n%3)==2){
  cout<<(n/3-1)<<" "<<1<<" "<<0<<endl;
   }
 else{
  if(n/3>=2){
   cout<<(n/3-2)<<" "<<0<<" "<<1<<endl;}
  else{
   cout<<-1<<endl;}
  }}
 
  
  
   
  
  
  
 
 
  
 
 
 
    
    
 
    
   
    
    
    return 0;
}