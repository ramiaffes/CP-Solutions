#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int factorial(long long int u){
 long long int p=1;
 for(long long int i(1);i<=u;i++){
  p*=i;}
 return p;}
int main()
{
 fast; 
  long long int a,b;
 cin>>a>>b;
 cout<<(factorial(min(a,b)))<<endl;
 
  
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}