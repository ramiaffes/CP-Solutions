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
 long long int k;
cin>>t;
while(t--){
  cin>>n>>k;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];}
  vector<long long int>vect1(k);
  long long int rh=0;
  bool test=false;
  for(long long int i(0);i<(n-1);i++){
   while((rh!=k)and(vect[i]>=1)){
   vect[n-1]+=1;
   vect[i]-=1;
   rh++;}
   if(rh==k)break;
   }
   
   
  for(long long int i(0);i<n;i++){
   cout<<vect[i]<< " ";}
   cout<<endl;
 
 
   }
  
  
  
  
  
  
 
 
   
  
  
  
  
  
  
     
  
  
  
 
  
  
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}