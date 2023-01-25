#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
    long long int t;
    cin>>t;
    
    long long int n;
    while(t--){
  cin>>n;
  if(n==1){
   cout<<0<<endl;}
  else{
  long long int i=1;
  long long int j=ceil(sqrt(n));
  long double var=n;
  long long int r=floor(var/j-i);
  long long int result=i-1+j-1;
  bool test=((i*j)>=n);
  while ((r<=min(n-ceil((sqrt(n))),floor(sqrt(n))-1))and(test==false)){
   for (long long int k(0);k<=r;k++){
    test=((i+k)*(j+r-k)>=n);
   if(test==true){break;}}
   if(test==true){break;}
   r++;
    }
   result=i-1+j+r-1;
   cout<<result<<endl;
   
   }}
   
 
 
 
   
   
  
  
   
    
    
 
    
   
    
    
    return 0;
}