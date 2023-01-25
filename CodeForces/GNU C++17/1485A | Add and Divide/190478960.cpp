#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int t,a,b;
 cin>>t;
 while(t--){
  cin>>a>>b;
  if(b>=(sqrt(a)+1)){
   if(b>a){
    cout<<1<<endl;}
   else{
    cout<<2<<endl;}}
  else{
      long long int som=0;
 long long int min=a+1;
 for(long long int i(b);i<=(sqrt(a)+1);i++){
     long long int p=1;  
     som=0;
    long long int val=i;
     if(i==1){val=i+1;}
  while(p<=(a)){
   p*=val;
   som++;}
  if(min>=(som+val-b))min=(som+val-b);
  }
 cout<<min<<endl;
  }
  
 
}
 
 
 
 
  
  
  
 
 
 
 
 
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}