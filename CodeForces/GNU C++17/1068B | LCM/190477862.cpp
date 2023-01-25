#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int b;
 cin>>b;
 if(b==1){
  cout<<1<<endl;}
  else{
  long long int som=0;
 long long int i=1;
 for (;i*i<b;++i){
   if(b%i==0){
    som+=2;}}
  if(i*i==b){
   som+=1;}
 cout<<som<<endl;}
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}