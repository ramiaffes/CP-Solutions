#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int t,n,k;
 string s;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];}
  long long int som=1;
  long long int max=1;
  for(long long int i(0);i<(n-1);i++){
   if(vect[i]==vect[i+1]){
    som++;}
   else{
    if(max<som){
     max=som;}
     som=1;}
   }
   if(max<som){
     max=som;}
  cout<<max<<endl;
  
  
 
  
  
  
  
  
  
  
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}