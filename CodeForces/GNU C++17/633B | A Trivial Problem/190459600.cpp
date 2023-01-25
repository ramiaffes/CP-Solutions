#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
int main()
{
 fast; 
 long long int m;
 cin>>m;
 long long int com=5;
 long long int som=0;
 bool test=true;
 while(som<m){
  long long int com1=com;
  while(com1%5==0){
   som++;
   com1/=5;
   if((som==m)and(com1%5==0)){test=false;break;}}
  com+=5;
  }
 if((test==false)){
  cout<<0<<endl;}
 else{
  cout<<5<<endl;
  cout<<(com-5)<<" "<<(com-4)<<" "<<(com-3)<<" "<<(com-2)<<" "<<(com-1)<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}