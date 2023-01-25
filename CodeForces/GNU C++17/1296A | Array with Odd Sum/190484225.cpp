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
  bool test1=false;
  bool test2=false;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
   if(vect[i]%2==0){
    test1=true;}
   else{
    test2=true;}}
  if(test1==false){
   if(n%2==0){
    cout<<"NO"<<endl;}
   else{
    cout<<"YES"<<endl;}}
  else if(test2==false){
   cout<<"NO"<<endl;}
  else{
   cout<<"YES"<<endl;}
  
   
  }
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}