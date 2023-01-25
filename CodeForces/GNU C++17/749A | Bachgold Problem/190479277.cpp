#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
long long int power(long long int g,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=g;}
 return p;}
int main()
{
 fast; 
 long long int n;
 cin>>n;
 if(n%2==0){
  cout<<(n/2)<<endl;
  for(long long int i(0);i<(n/2);i++){
   cout<<2<<" ";}
  cout<<endl;
  }
 else{
  n-=3;
  cout<<(n/2+1)<<endl;
  cout<<3<<" ";
  for(long long int i(0);i<(n/2);i++){
   cout<<2<<" ";}
  cout<<endl;
  }
 
  
 
 
 
 
 
 
 
 
  
  
  
 
 
 
 
 
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}