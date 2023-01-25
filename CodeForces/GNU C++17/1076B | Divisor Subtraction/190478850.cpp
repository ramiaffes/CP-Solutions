#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int  n;
 cin>>n;
 long long int som=0;
 if(n%2==0){
  som=n/2;
  }
 else{
  long long int i=0;
  for(i=3;i<=sqrt(n);i+=2){
   if(n%i==0)break;}
  if(i>sqrt(n))som=1;
  else {
   n-=i;
   som+=1;
   som+=n/2;
   }}
  cout<<som<<endl;
   
  
 
 
 
 
 
 
  
  
  
 
 
 
 
 
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}