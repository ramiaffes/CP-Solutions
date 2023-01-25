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
  long long int p=4;
  while(n%(p-1)!=0){
   p*=2;
   }
  cout<<(n/(p-1))<<endl;
  
 
 
 
}
 
 
 
 
  
 
 
 
 
 
 
return 0;}