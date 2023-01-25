#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int gcd(long long int a,long long int b){
 if(b==0)return a;
 else return gcd(b,a%b); }
int main()
{
 fast; 
 long long int  a,b,c;
 cin>>a>>b>>c;
 if(c%gcd(a,b)!=0){
  cout<<"NO"<<endl;}
 else{
  while((c>=0)and(c%b!=0)){
   c-=a;
   }
  if(c<0)cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}