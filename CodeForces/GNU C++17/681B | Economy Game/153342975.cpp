#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int n,a,b,c;
 cin>>n;
 long long int val=n/1234567;
 bool test=false;
 for(long long int i(0);i<=val;i++){
  long long int val2=(n-i*1234567)/123456;
  for(long long int d(0);d<=(val2);d++){
    long long int val3=(n-i*1234567-d*123456)/1234;
    if((i*1234567+d*123456+val3*1234)==n){
     test=true;break;
     }
    } if(test==true)break;
   }
  
if(test==true){
 cout<<"Yes"<<endl;}
else{
 cout<<"No"<<endl;}
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}