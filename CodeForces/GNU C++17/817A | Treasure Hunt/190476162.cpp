#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int x1,x3,x2,x4,x,y;
 cin>>x1>>x3>>x2>>x4;
 cin>>x>>y;
 if((x2-x1)%x!=0){
  cout<<"NO"<<endl;}
 else if((x3-x4)%y!=0){
  cout<<"NO"<<endl;}
 else{
  if(((x2-x1)/x-(x3-x4)/y)%2==0){
   cout<<"YES"<<endl;
   
   }
  else{
   cout<<"NO"<<endl;}
  }
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}