#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int  t,l,r;
 cin>>t;
 while(t--){
  cin>>l>>r;
  if(r==1) cout<<0<<endl;
  else if((r%2==0)and(r/2+1)>=l){
   cout<<(r/2-1)<<endl;}
  else if((r%2==1)and(r/2+1)>=l){
   cout<<(r/2)<<endl;}
  else{
   cout<<(r-l)<<endl;
   }
  
  
  
  
  }
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}