#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 long long int l,r;
 cin>>l>>r;
 long long int p=1;
 long long int som=0;
 long long int som1=0;
 while(p<r){
  p*=2;
  som++;}
 if(p>r){
  p/=2;
  som--;}
 p=1;
 while(p<r){
  p*=3;
  som1++;}
 if(p>r){
  p/=3;
  som1--;}
 long long int p3=1;
 long long int p2=1;
 long long int res=0;
 for(long long int i(0);i<=som1;i++){
  p3=1;
  for(long long int j(0);j<=som;j++){
   if(((p3*p2)>=l)and((p3*p2)<=r)){res++;}
   p3*=2;
   }
  p2*=3;}
 cout<<res<<endl;
 
 
 
 
   
   
    
    
    
 
 
 
  
  
 
 
 
  
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}