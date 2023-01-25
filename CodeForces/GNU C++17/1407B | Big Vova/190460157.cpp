#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int gcd(long long int a,long long int b){
 if(b==0)return a;
 else return gcd(b,a%b); }
int main()
{
 fast; 
 long long int  n,t;
 cin>>t;
 while(t--){
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
  sort(vect.begin(),vect.end());
  swap(vect[0],vect[n-1]);
 long long int valm;
 long long int val=vect[0];
 for(long long int j(0);j<(n-1);j++){
   valm=j+1;
  long long int max1=gcd(val,vect[j+1]);
  for(long long int l(j+1);l<n;l++){
   if(gcd(val,vect[l])>=max1){
    max1=gcd(val,vect[l]);
    valm=l;}}
   swap(vect[j+1],vect[valm]);
   val=max1;
   }
 for(long long int i(0);i<n;i++){
  cout<<vect[i]<<" ";}
 cout<<endl;  
}
 
  
  
  
  
  
 
 
 
  
 
  
  
  
  
  
  
 
 
 
  
  
  
  
 
  
  
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}