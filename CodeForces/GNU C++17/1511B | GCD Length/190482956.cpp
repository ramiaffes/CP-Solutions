#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int power(long long int n,long long int exp){
 long long int p=1;
 for(long long int i(0);i<exp;i++){
  p*=n;}
 return p;
  }
 
int main()
{
 fast; 
 long long int t;
 long long int n;
 long long int a,b,c;
 cin>>t;
 for(long long int d(1);d<=t;d++){
  cin>>a>>b>>c;
  long long int dh=power(10,(b-c+1));
  long long int mh=power(10,(a-c+1));
  long long int ch=power(10,(c-1));
  long long int gh=1;
  while(gh<dh){
   gh*=9;}
  long long int kh=1;
  while(kh<mh){
   kh*=8;}
  gh/=9;
  kh/=8;
  cout<<(kh*ch)<<" "<<(gh*ch)<<endl;
  
  
  
  
  
  
 
 }
   
  
  
  
  
  
  
     
  
  
  
 
  
  
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}
 