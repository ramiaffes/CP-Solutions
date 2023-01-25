#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int t;
 cin>>t;
 while(t--){
  long long int n,k;
  cin>>n>>k;
  vector<long long int>result;
  if(n%2==1){
   cout<<(n-1)/2<<" "<<(n-1)/2<<" "<<1<<endl;}
  else if (n%4==2){
   cout<<(n-2)/2<< " "<<(n-2)/2<<" "<<2<<endl; }
  else{
   cout<<(n/4)<<" "<<(n/4)<<" "<<(n/2)<<endl;}
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}