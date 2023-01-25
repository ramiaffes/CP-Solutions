#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int n;
  cin>>n;
  if (n<=30){
   cout<<"NO";}
  else if (n==36){ 
   cout<<"YES"<<endl;
   cout<<6<<" "<<15<<" "<<10<<" "<<5;}
  else if (n==44){
   cout<<"YES"<<endl;
   cout<<6<<" "<<15<<" "<<10<<" "<<13;}
  else if (n==40){
   cout<<"YES"<<endl;
   cout<<6<<" "<<15<<" "<<10<<" "<<9;}
  else{
   cout<<"YES"<<endl;
   cout<<6<<" "<<14<<" "<<10<<" "<<n-6-14-10;}
   cout<<endl;}
 
  
 return 0;}