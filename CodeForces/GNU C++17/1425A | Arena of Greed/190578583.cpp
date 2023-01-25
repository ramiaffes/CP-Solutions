#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 long long int fonction(long long int n){
  long long int som=0;
  while(n!=0){
   if(n==4){
    som+=3;
    break;}
   if(((n/2)%2==0)){
    som+=1;
    n-=2;}
   else{
    som+=(n/2);
    n=n/2;
    n-=1;}
   }
   return som;}
 
 
int main()
{
 fast; 
 long long int t,n;
 cin>>t;
 string s;
 while(t--){
  cin>>n;
  if(n%2==0){
   cout<<fonction(n)<<endl;
  }
  else{
   cout<<(1+(n-1)-fonction(n-1))<<endl;
   }
  
  
}
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}