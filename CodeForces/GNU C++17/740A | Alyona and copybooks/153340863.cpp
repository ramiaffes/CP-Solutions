#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int n,a,b,c;
 cin>>n>>a>>b>>c;
 if(n%4==0){
  cout<<0<<endl;}
else{
 long long int val=4-n%4;
 if(val==1){
  cout<<min(a,min(b+c,3*c))<<endl;}
 else if(val==2){
  cout<<min(2*a,min(b,2*c))<<endl;
  }
 else if(val==3){
  cout<<min(min(3*a,(2*c+a)),min(c,b+a))<<endl;
  }
 
 }
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}