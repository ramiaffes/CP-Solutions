#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int t,n,w,h;
 cin>>t;
 string s;
 while(t--){
  cin>>w>>h>>n;
  long long int som1=1;
  long long int som2=1;
  while(w%2==0){
   w/=2;
   som1*=2;;
   }
  while(h%2==0){
   h/=2;
   som2*=2;
   }
   if((som1*som2)>=n){
    cout<<"YES"<<endl;}
   else{
    cout<<"NO"<<endl;}
  
  
  
}
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}