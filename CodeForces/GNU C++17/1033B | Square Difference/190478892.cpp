#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int t,a,b;
 cin>>t;
 while(t--){
  cin>>b>>a;
  if((b-a)!=1)cout<<"NO"<<endl;
  else{
  bool test=true;
  for(long long int i(3);i<=sqrt(2*a+1);i+=2){
    if((b+a)%i==0){test=false;break;}}
  if(test==false)cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
    
  }
  }
   
  
 
 
 
 
 
 
  
  
  
 
 
 
 
 
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}