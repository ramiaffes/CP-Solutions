#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int  t,a,b;
 cin>>t;
 while(t--){
  cin>>a>>b;
  if(a==b)cout<<0<<" "<<0<<endl;
  else{
   long long int val=abs(a-b);
   cout<<val<<" "<<(min(a%val,val-a%val))<<endl;
   }}
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}