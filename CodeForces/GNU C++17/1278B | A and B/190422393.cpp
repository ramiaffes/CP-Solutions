#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
 fast; 
 string s;
 long long int t,a,b;
    cin>>t;
    while(t--){
  cin>>a>>b;
  long long int val=max(a,b)-min(a,b);
  long long int d=0;
  while((d*(d+1)/2)<val){
   d++;}
  if(d*(d+1)/2==val){
   cout<<d<<endl;}
  else{
  while((d*(d+1)/2-val)%2!=0){
   d++;}
  cout<<d<<endl;
   }}
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}