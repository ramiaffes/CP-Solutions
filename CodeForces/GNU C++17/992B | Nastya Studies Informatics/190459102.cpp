#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int gcd(long long int a,long long int b){
 if(b==0)return a;
 else return gcd(b,a%b); }
int main()
{
 fast; 
 long long  int l,r,x,y;
 cin>>l>>r>>x>>y;
 long long int i=1;
 long long int som=0;
 for(i=1;i<sqrt(y);i++){
  if(y%i==0){
   if(i%x==0){
    if(((i>=l)and(i<=r))and(((x*y/i)<=r)and((x*y/i)>=l))){
     if(gcd(y/i,i/x)==1)som++;
     }}
   if((y/i)%x==0){
    if((((y/i)>=l)and((y/i)<=r))and(((x*y/(y/i))<=r)and((x*y/(y/i))>=l))){
     if(gcd(i,(y/i)/x)==1)som++;
     }}}
  }
 if(i*i==y){if(i%x==0){
    if(((i>=l)and(i<=r))and(((x*y/i)<=r)and((x*y/i)>=l))){
     if(gcd(y/i,i/x)==1)som++;
     }}}
 cout<<(som)<<endl;
 
  
 
  
  
  
  
  
  
 
 
 
  
  
  
  
 
  
  
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}