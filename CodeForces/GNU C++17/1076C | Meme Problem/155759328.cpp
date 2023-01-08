#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int power(long long int m,long long int d){
 long long int p=1;
 for(long long int i(0);i<d;i++){
  p*=m;}
 return p;}
int main()
{
 fast;
long long int d,t;
 cin>>t;
 while(t--){
  cin>>d;
  if((d>0)and(d<4)){
   cout<<"N"<<endl;}
 else if((d==0)or(d==4)){
  cout<<"Y"<<" ";
  float var=d/2;
  cout<<var<<" "<<var<<endl;
  }
 else{
  cout<<'Y'<<' '<<fixed<<setprecision(10)<<((sqrt(d*d-4*d)+d)/2)<<' '<<((-sqrt(d*d-4*d)+d)/2)<<endl;}
  }
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}  