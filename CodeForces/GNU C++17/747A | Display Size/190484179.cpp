#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int n;
 cin>>n;
 long long int d=floor(sqrt(n));
 while(n%d!=0){
  d--;}
 cout<<(d)<<" "<<(n/d)<<endl;
 
  
  
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}