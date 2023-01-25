#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int n,t;
 cin>>n;
 vector<long long int>vect(n);
 long long int som=0;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  if(vect[i]==0)som++;}
 if((som==0)){
  cout<<-1<<endl;}
 else if((n-som)>=9){
  for( long long int i(0);i<((n-som)-(n-som)%9);i++){
   cout<<5;}
  for(long long int i(0);i<som;i++){
   cout<<0;}
  }
 else{
  cout<<0<<endl;}
  
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}