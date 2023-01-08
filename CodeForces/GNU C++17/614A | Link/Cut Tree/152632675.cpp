#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
long long int som=0; 
int main()
{
 fast; 
 long long int l,r,k;
 string s;
 cin>>l>>r>>k;
 long long int val=1;
 while(val<l){
  if(val>(1e18/k))break;
  val=val*k;}
 bool test=false;
 if(val>=l){
 while(val<=r){
  cout<<val<<" ";
  test=true;
  if(val>(1e18/k))break;
  val=val*k;}}
if(test==false)cout<<-1<<endl;
 
 
 
 
 
  
  
  
  
  
  
 
 
    
return 0;}