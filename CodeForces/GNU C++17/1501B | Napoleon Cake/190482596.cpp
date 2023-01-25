#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int t;
 cin>>t;
 while(t--){
  long long int n;
  cin>>n;
  vector<long long int>done(n);
  vector< long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
   }
   if(n==1){
    if(vect[0]>=1){
     cout<<1<<endl;}
    else{
     cout<<0<<endl;}}
  else{
  vector<long long int >result(n);
  result[0]=vect[n-1];
  for(long long int i(0);i<(n-1);i++){
   if(result[i]>=1){
    done[i]=1;
    result[i+1]=max((result[i]-1),vect[n-i-2]);}
   else{
    result[i+1]=vect[n-i-2];}}     
  if(result[n-1]>=1){
   done[n-1]=1;}
  
 for(long long int i(n-1);i>=0;i--){
  cout<<done[i]<<endl;}}}
  
  
 
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}