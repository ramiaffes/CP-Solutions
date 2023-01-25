#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
bool fair(long long int x){
 long long int n=x;
 while(n!=0){
  long long int cr=n%10;
  if((cr!=0)and(x%cr!=0)){
   return false;}
  n/=10;}
 return true;
 }
 
 
int main()
{
 fast; 
 long long int k,a,b;
 cin>>k>>a>>b;
 if((a==0)){
  cout<<(b/k+1)<<endl;}
 else if(b==0){
  cout<<(abs(a)/k+1)<<endl;}
 else if((a<0)and(b>0)){
  a=-a;
  cout<<(b/k+a/k+1)<<endl;}
 else if ((b<0)and(a<0)){
   a=-a;
   b=-b;
   swap(a,b);
   if(a%k==0){
    cout<<((b-a)/k+1)<<endl;}
  else if((a+k-a%k)>b){
   cout<<0<<endl;
   }
  else{
   cout<<((b-(a+k-a%k))/k+1)<<endl;}
   }
 else{if(a%k==0){
    cout<<((b-a)/k+1)<<endl;}
  else if((a+k-a%k)>b){
   cout<<0<<endl;
   }
  else{
   cout<<((b-(a+k-a%k))/k+1)<<endl;}}
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}