#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int q,l,r,d;
 cin>>q;
 while(q--){
  cin>>l>>r>>d;
  if(d<l){
   cout<<d<<endl;}
  else{
   cout<<(r-r%d+d)<<endl;}}
 
  
  
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}