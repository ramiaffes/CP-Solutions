#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int prime(long long int n){
 for(long long int i(2);i<=sqrt(n);i++){
  if(n%i==0)return false;}
 return true;}
int main()
{
 fast; 
 long long int t,n,d,k;
 string s;
 cin>>t;
 while(t--){
  cin>>n;
  while(n%2==0){
   n/=2;}
  if(n==1)cout <<"no"<<endl;
  else if(n%2==1)cout<<"yes"<<endl;
  else cout<<"no"<<endl;
  
  
  
  
  
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}