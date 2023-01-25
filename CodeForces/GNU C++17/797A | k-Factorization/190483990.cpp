#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int n,k;
 cin>>n>>k;
 vector<long long int>result;
 long long int i=2;
 long long int n1=n;
 while ((i<=n)and(n1!=1)){
  while(n1%i==0){
   n1/=i;
   result.push_back(i);}
  i++;
  }
 long long int len=result.size();
 if(len<k){
  cout<<-1<<endl;}
 else{
  for(long long int i(0);i<(k-1);i++){
   cout<<result[i]<<" ";}
  long long int p=1;
  for (long long int i(k-1);i<len;i++){
   p*=result[i];}
  if(p!=1){
  cout<<p;}
  cout<<endl;}
 
  
  
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}