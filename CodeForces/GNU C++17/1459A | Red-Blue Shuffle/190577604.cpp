#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  long long int som=0;
  long long int som1=0;
  string vect(n,' ');
  string vect1(n,' ');
  for(long long int i(0);i<n;i++){
   cin>>vect[i];}
  for(long long int i(0);i<n;i++){
   cin>>vect1[i];}
  for(long long int i(0);i<n;i++){
   if(vect[i]>vect1[i]){
    som++;}
   else if(vect[i]<vect1[i]){
    som1++;}
   else{som=som;}}
   if(som==som1){
    cout<<"EQUAL"<<endl;}
    else{
   cout<<(som>som1?"RED":"BLUE")<<endl;}
  
  
  
  
 }
  
  
  
  
  
 
  
 
 
 
 return 0;
}