#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
bool fair(long long int x){
 long long int n=x;
 while(n!=0){
  long long int cr=n%10;
  if((cr!=0)and(x%cr!=0)){
   return false;}
  n/=10;}
 return true;
 }
 
 
int main()
{
 fast; 
 long long int t,n;
 cin>>t;
 string s;
 while(t--){
  cin>>n;
  for(long long int i=2*n;i<4*n;i+=2){
   cout<<i<<" ";}
   cout<<endl;
  
  
  }
  
  
  
  
  
  
 
  
 
 
 
 return 0;
}