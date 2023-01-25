#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int t,n,d,k;
 cin>>t;
 while(t--){
  cin>>n;
  long long int som=0;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
   som+=vect[i];}
  long long int i=0;
  bool test=false;
  bool test1=false;
  long long int cmp=0;
  while(test==false){
  if(test1==true){
   vect[i+1]+=vect[i];
   vect[i]=0;
   i++;}
  while((som%(vect[i])!=0)){
   vect[i+1]+=vect[i];
   vect[i]=0;
   i+=1;
   }
  cmp=i;
  long long int som1=0;
  for(long long int j(i+1);j<n;j++){
   som1+=vect[j];
   if(som1!=vect[j]){
   cmp+=1;}
   if(som1==vect[i]){
    som1=0;}
   if(som1>vect[i]){
    break;}
   }
  test=(som1==0);
  test1=true;
  }
  
  
   
   cout<<cmp<<endl; 
  
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}