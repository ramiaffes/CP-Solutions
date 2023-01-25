#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int fact(long long int n){
 long long int p=1;
 for(long long int i(1);i<=n;i++){
  p*=i;}
 return p;}
 
int main()
{
 fast; 
 long long int t,n;
  cin>>n;
  cout<<(((fact(n)/(n/2))/(n/2))/2)<<endl;
  
  
  
  
  
  
  
  
 
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}