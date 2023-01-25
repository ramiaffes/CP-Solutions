#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int prime(long long int n){
 for(long long int i(2);i<=sqrt(n);i++){
  if(n%i==0)return false;}
 return true;}
int main()
{
 fast; 
 long long int t,n,d,k;
 string s;
 cin>>t;
 while(t--){
  cin>>n>>k;
  cin>>s;
  long long int som=0;
  long long int i=0;
  while((s[i]=='0')and(i<n)){
   i++;
   }
  if((i>k)or(i>=n)){
   som++;
   s[0]='1';
   i=0;}
  long long int j=n-1;
  while((s[j]=='0')and(j>=0)){
   j--;}
  if(((n-1-j)>k)){
   som++;
   s[n-1]='1';
   j=n-1;}
  long long int som1=0;
  for(long long int r(i+1);r<=j;r++){
   if(s[r]=='0'){
    som1++;}
   else{
    long long int var=0;
    som+=max((som1-k),var)/(k+1);
    som1=0;}
   }
  cout<<som<<endl;
  
  
  
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}