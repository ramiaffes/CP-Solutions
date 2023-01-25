#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int power(long long int g,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=g;}
 return p;}
int main()
{
 fast; 
 long long int n,m;
 cin>>n>>m;
 long long int max1=(n-m)*(n-m+1)/2;
 long long int num1=n/m;
 long long int min1=((num1)*(num1+1)/2)*(n%m)+((num1-1)*(num1)/2)*(m-n%m);
 cout<<min1<<" "<<max1<<endl;
 
 
 
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}