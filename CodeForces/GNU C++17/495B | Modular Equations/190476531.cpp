#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int a,b;
 cin>>a>>b;
 long long int som=0;
 if(a==b)cout<<"infinity"<<endl;
 else{
  for(long long int i(1);i<=sqrt(a-b);i++){
   if(((a-b)%i==0)){
    if(b%i==b){
     if(i*i==(a-b))
     som+=1;
     else som+=2;}
    else if(b%((a-b)/i)==b){
     som+=1;}
   
   }}
  cout<<som<<endl;
   }
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}