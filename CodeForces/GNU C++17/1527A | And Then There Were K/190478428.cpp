#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int power(long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=2;}
 return p;}
int main()
{
 fast; 
 long long int n,t;
 long long int a,b,c;
 cin>>t;
 while(t--){
  cin>>n;
 long long int som=0;
 while(n!=0){
  som++;
  n/=2;}
 cout<<(power(som-1)-1)<<endl;
}
 
 
  
  
  
 
 
 
 
 
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}