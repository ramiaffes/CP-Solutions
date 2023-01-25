#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int power(long long int n,long long int exp){
 long long int p=1;
 for(long long int i(0);i<exp;i++){
  p*=n;}
 return p;
  }
 
int main()
{
 fast; 
 long long int t;
 long long int n;
 long long int q;
 
  cin>>n>>q;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];}
   vector<long long int>vect1(q);
   for(long long int j(0);j<q;j++){
    cin>>vect1[j];}
  for(long long int j(0);j<q;j++){
   long long int i=0;
   while((i<n)and(vect[i]!=vect1[j])){
    i++;}
   cout<<(i+1)<<" ";
   for(long long int j(i);j>=1;j--){
   swap(vect[j],vect[j-1]);}
   }
  
  
  
  
  
  
 
 
   
  
  
  
  
  
  
     
  
  
  
 
  
  
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}