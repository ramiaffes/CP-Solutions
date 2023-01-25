#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int gcd(long long int a,long long int b){
 if(b==0)return a;
 else return gcd(b,a%b); }
int main()
{
 fast; 
 long long int a,b,c,d;
 cin>>a>>b;
 cin>>c>>d;
 if((d-b)%gcd(a,c)!=0){
  cout<<-1<<endl;}
 else{
  long long int val=(d-b);
  long long int som=0;
  while(val>0){
   val-=a;
   som++;}
  while(val%c!=0){
   val-=a;
   som++;
   } 
 cout<<(b+som*a)<<endl;}
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}