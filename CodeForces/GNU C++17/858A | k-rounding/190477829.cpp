#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int power(long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=10;}
 return p;}
int main()
{
 fast; 
  long long int n,k;
 cin>>n>>k;
 long long int som=0;
 while((n%5==0) and(som<k)){
  n/=5;
  som++;}
 som=0;
 while((n%2==0) and(som<k)){
  n/=2;
  som++;} 
 cout<<(n*power(k))<<endl;
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}