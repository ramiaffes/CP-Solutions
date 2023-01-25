#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int power(long long int r,long long int j){
 long long int p=1;
 for(long long int i(0);i<j;i++){
  p*=r;}
 return p;}
int main()
{
 fast; 
  long long int n,p,t,a,b,c,k;
   cin>>t;
   while(t--){
 cin>>n>>k;
 long long int m=0;
 if(k%2==0){
  m=k/2-1;}
 else{
  m=k/2;}
 cout<<(n-m-1)<<endl;
 for(long long int i(m+1);i<=n;i++){
  if(i!=k){
  cout<<i<<" ";}
  
  }
 
 
 
 
 
 cout<<endl;
 
  
 }
 
 
 
 
 
 
 
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}