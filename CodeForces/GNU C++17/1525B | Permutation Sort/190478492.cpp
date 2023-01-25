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
   cin>>vect[i];}
  if(is_sorted(vect.begin(),vect.end())){
   cout<<0<<endl;}
  else if((vect[0]!=1)and(vect[n-1]!=n)){
   if((vect[0]==n)and(vect[n-1]==1)){
   cout<<3<<endl;}
   else{
    cout<<2<<endl;}}
  else{
   cout<<1<<endl;}
   
   }
 
 
 
  
  
  
 
 
 
 
 
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}