#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=50;
 
int main()
{
 fast; 
 long long int n,t,a,b;
 cin>>t;
 while(t--){
  cin>>a>>b;
  if(b==0){
   cout<<(a+1)<<endl;}
  else if(a==0){
   cout<<1<<endl;}
  else{
   cout<<(a+2*b+1)<<endl;}
  }
 
 
 
 
 
return 0;}