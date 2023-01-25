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
 long long int n,a,b;
 cin>>n;
 for(long long int i(0);i<n;i++){
  cin>>a>>b;
  long long int val1=min(a,b);
  long long int val2=max(a,b);
  long long int som=0;
  while(val1!=0){som+=val2/val1;
   long long int num=val1;
   val1=val2%num;
   val2=num;
   }
  cout<<som<<endl;}
 
  
 
 
 
 
 
 
 
 
  
  
  
 
 
 
 
 
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}