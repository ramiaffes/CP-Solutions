#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int  l,r;
 cin>>l>>r;
 if(l%2==0){
  if((r-l)<2){
   cout<<-1<<endl;}
  else{
   cout<<l<<" "<<(l+1)<<" "<<(l+2)<<endl;}}
 else{
  if((r-l)<=2){
   cout<<-1<<endl;}
  else{
   cout<<(l+1)<<" "<<(l+2)<<" "<<(l+3)<<endl;}
  }
 
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}