#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 sort(vect.begin(),vect.end());
 if(n==1){
  cout<<"YES"<<endl;
  cout<<1<<endl;
  cout<<vect[0]<<endl;
  cout<<0<<endl;
  cout<<endl;
  }
 else{
 long long int som=0;
 for(long long int i(0);i<(n-1);i++){
  if(vect[i]==vect[i+1])som++;
  else som=0;
  if(som==2)break;
  }
 if(som==2){
  cout<<"NO"<<endl;}
 else{
  cout<<"YES"<<endl;
 if(n%2==1){
  cout<<(n-n/2)<<endl;
  for(long long int i(0);i<(n);i+=2){
   cout<<vect[i]<<" ";
   }
  cout<<endl;
  cout<<(n/2)<<endl;
  for(long long int i(n-2);i>=1;i-=2){
   cout<<vect[i]<<" ";
   }}
 else{
  cout<<(n-n/2)<<endl;
  for(long long int i(0);i<(n-1);i+=2){
   cout<<vect[i]<<" ";
   }
  cout<<endl;
  cout<<(n/2)<<endl;
  for(long long int i(n-1);i>=1;i-=2){
   cout<<vect[i]<<" ";
   }}}}
 
 
 
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}