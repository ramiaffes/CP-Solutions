#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std; 
long long int power(long long int var,long long int exp){
long long int p=1;
for(long long int i(1);i<=exp;i++){
   p*=10;}
   return p;}
int main() {
 fast;
 long long int t;
 long long int a,b;
 
  
 cin>>t;
 while(t--){
  string ch;
  cin>>a>>b;
  stringstream ss;  
        ss<<b; 
  ss>>ch;
  long  long int  r=ch.size();
  long long int  result=b+1;
  long long int result2=power(10,r);
     if(result==result2){
   cout<<((r)*a)<<endl;}
  else{
  cout<<((r-1)*a)<<endl;}}
 
 
 
  
  
   
  
  
  
 
 
  
 
 
 
    
    
 
    
   
    
    
    return 0;
}