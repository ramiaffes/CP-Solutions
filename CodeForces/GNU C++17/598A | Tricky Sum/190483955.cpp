#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  long long int p=1;
  while(n>=p){
   p*=2;}
  cout<<(n*(n+1)/2-2*(p-1))<<endl;
  
  
 
 
 
}
 
 
 
 
  
 
 
 
 
 
 
return 0;}