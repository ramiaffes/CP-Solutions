#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int  t,n;
 cin>>t;
 while(t--){
  cin>>n;
  bool test=false;
  long long int i;
  for(i=2;i<=sqrt(n);i++){
   if(n%i==0){test=true;break;}}
  if(test==true){
   cout<<(n/i)<<" "<<(n-n/i)<<endl;}
  else{
   cout<<1<<" "<<(n-1)<<endl;
  }
 
}
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}