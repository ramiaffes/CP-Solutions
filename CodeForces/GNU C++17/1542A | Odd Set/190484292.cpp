#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int n,t;
 cin>>t;
 while(t--){
 cin>>n;
 vector<long long int >vect(2*n);
 long long int som=0;
 for(long long int i(0);i<2*n;i++){
  cin>>vect[i];
  if(vect[i]%2==0)som++;
  else som--;}
 if(som==0){
  cout<<"YES"<<endl;}
 else{
  cout<<"NO"<<endl;}
 }
  
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}