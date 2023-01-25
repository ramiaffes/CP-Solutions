#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long long int N=1e4;
int main()
{
 fast; 
 long long int n;
 cin>>n;
 map<string,long long int>hashage;
 vector<string>vect(n);
 vector<string>res(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  if(hashage[vect[i]]==0){
  res[i]="OK";}
  else{
   res[i]=vect[i]+to_string(hashage[vect[i]]);}
  hashage[vect[i]]++;}
 
 for(long long int i(0);i<n;i++){
  cout<<res[i]<<endl;} 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}