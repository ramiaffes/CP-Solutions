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
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  }
 
 cout<<(n/2)<<endl;
 if(n%2==0){
 for(long long int i(0);i<(n-1);i+=2){
  if(vect[i]<vect[i+1]){
   cout<<(i+1)<<" "<<(i+2)<<" "<<vect[i]<<" "<<(1000000007)<<endl;}
  else{
   cout<<(i+1)<<" "<<(i+2)<<" "<<vect[i+1]<<" "<<(1000000007)<<endl;
   }}}
 else{
  for(long long int i(0);i<(n-2);i+=2){
  if(vect[i]<vect[i+1]){
   cout<<(i+1)<<" "<<(i+2)<<" "<<vect[i]<<" "<<(1000000007)<<endl;}
  else{
   cout<<(i+1)<<" "<<(i+2)<<" "<<vect[i+1]<<" "<<(1000000007)<<endl;
   }}}
  
  
  
 
 
 }
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}