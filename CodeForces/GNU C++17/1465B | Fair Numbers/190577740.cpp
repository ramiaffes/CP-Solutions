 
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
  long long int x=n;
  while(fair(x)!=true){
   x++;}
   cout<<x<<endl;
  
  
  
  }
  
  
  
  
  
  
 
  
 
 
 
 return 0;
}