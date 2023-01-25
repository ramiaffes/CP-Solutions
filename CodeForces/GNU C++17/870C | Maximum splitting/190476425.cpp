#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int q,num;
 cin>>q;
 while(q--){
  cin>>num;
  if(num<4)cout<<-1<<endl;
  else if(num%4==0){
   cout<<num/4<<endl;}
  else if(num%4==2){
   cout<<(num/4)<<endl;}
  else if(num%4==3){
   if((num==7)or(num==11)){
    cout<<-1<<endl;}
   else{
    cout<<(num/4-1)<<endl;
    }
   }
  else{
   if(num==5){
    cout<<-1<<endl;}
   else{
    cout<<(num/4-1)<<endl;}
   }
   
  }
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}