#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int a,b;
 cin>>a>>b;
 if((b-a)>=6)cout<<0<<endl;
 else {
  long long int p=1;
  for(long long int i(a+1);i<=b;i++){
   p*=(i%10);
   p=p%10;}
  cout<<p<<endl;
 }
 
 
  
  
  
 
 
 
 
 
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}