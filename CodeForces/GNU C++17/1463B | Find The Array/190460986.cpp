#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int n,t;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  vector<long long int>res(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
   }
  for(long long int i(0);i<n;i++){
   long long int p=1;
   while(vect[i]!=0){
    vect[i]/=2;
    p*=2;}
   res[i]=(p/2);}
  
  for(long long int i(0);i<n;i++){
   cout<<res[i]<<" ";
   } cout<<endl; 
    
    
   
  }
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}