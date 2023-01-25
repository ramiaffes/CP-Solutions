#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int product(long long int res){
 long long int p=1;
 while(res!=0){
  p*=(res%10);
  res/=10;
  }
 return p;}
long long int fonction(long long int n){
 if(n<10){
  return n;}
 else{
  long long int n1=n;
  long long int p=1;
  while(n1>=10){
   p*=10;
   n1/=10;}
  return max(product((n1-1)*(p)+(p-1)),n1*fonction(n%(n1*p)));}
 }
int main()
{
 fast; 
 long long int  n;
 cin>>n;
 cout<<fonction(n)<<endl;
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}