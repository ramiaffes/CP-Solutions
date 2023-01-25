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
 while(t--){
  cin>>n;
  long long int som=0;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
   som+=vect[i];}
  long long int result;
   if(som%(n-1)!=0){
   result=(n-1)-som%(n-1);}
   else{
    result=0;}
  
  som+=result;
  sort(vect.begin(),vect.end());
  if(vect[n-1]>=(som/(n-1))){
  result+=(-som/(n-1)+vect[n-1])*(n-1);}
  else{
   result+=0;}
  
  cout<<result<<endl;
  }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}