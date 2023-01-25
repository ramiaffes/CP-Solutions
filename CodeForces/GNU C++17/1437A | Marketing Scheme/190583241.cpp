#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
 long long int t,l,r;
 cin>>t;
 while(t--){
  cin>>l>>r;
  if(r==1){
   cout<<"YES"<<endl;}
  else if(r%2==0){
   if((r-l)<(r/2)){
    cout<<"YES"<<endl;}
   else{
    cout<<"NO"<<endl;}
   }
  else{
   if((r-l)<=((r-1)/2)){
    cout<<"YES"<<endl;}
    else{
     cout<<"NO"<<endl;}
   }
 }
 
 
    return 0;
}
  
  
 
 
  
 
 
 
    
    
 
    
   
    