#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int prime(long long int n){
 for(long long int i(2);i<=sqrt(n);i++){
  if(n%i==0)return false;}
 return true;}
int main()
{
 fast; 
 long long int t,n,d,k;
 string s;
 cin>>t;
 while(t--){
  cin>>n;
  long long int cmp=0;
  long long int som=0;
  while(som<n){
   som+=2020;
   cmp+=1;}
  if(som==n)cout<<"yes"<<endl;
  else{
   som-=2020;
   cmp-=1;
   if((n-som)<=cmp)cout<<"yes"<<endl;
   else cout<<"no"<<endl;
   }
  
  
  
  
  
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}