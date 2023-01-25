#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long  int t,a,b,n;
 cin>>t;
 while(t--){
  cin>>a>>b;
   if((a-1)%4==1){
   if(b==(1))cout<<(a)<<endl;
   else if((b^1)!=a)cout<<(a+1)<<endl;
   else  cout<<(a+2)<<endl;
   }
  else if((a-1)%4==0){
   if(b==(a-1))cout<<(a)<<endl;
   else if((b^(a-1))!=a)cout<<(a+1)<<endl;
   else  cout<<(a+2)<<endl;}
  else if((a-1)%4==3){
   if(b==(0))cout<<(a)<<endl;
   else if(b!=a) cout<<(a+1)<<endl;
   else cout<<(a+2)<<endl;}
  else{
   if(b==(a))cout<<(a)<<endl;
   else if((b^(a))!=a)cout<<(a+1)<<endl;
   else  cout<<(a+2)<<endl;}
  
  
  }
 
 
 
  
 
  
  
  
  
  
  
 
 
 
  
  
  
  
 
  
  
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}