#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int gcd(long long int a,long long int b){
 if(b==0)return a;
 else return gcd(b,a%b); }
 
int main()
{
 fast; 
 long long int  n,a,b;
 cin>>n>>a>>b;
 long long int som=0;
 if(n%gcd(a,b)!=0)cout<<"NO"<<endl;
 else{
  while((n>=0)and(n%b!=0)){
   n-=a;
   som++;}
  if(n<0)cout<<"NO"<<endl;
 else{ cout<<"YES"<<endl;
  cout<<(som)<<" "<<n/b<<endl;}
  }
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}