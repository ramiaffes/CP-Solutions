#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int t, n;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(2*n);
  long long int som1=0;
  long long int som2=0;
  for(long long int i(0);i<(2*n);i++){
   cin>>vect[i];
   if(vect[i]%2==0)som1++;
   if(vect[i]%2==1)som2++;}
  if(som2%2==1){
   som1--;
   som2--;}
  else{
   if(som2>=2){
    som2-=2;}
   else{
    som1-=2;}}  
  long long int i=0;
  long long int som=0;
  while((i<(2*n))and(som<(som1))){
   if(vect[i]%2==0){
    som++;
   cout<<(i+1)<<" ";
   if(som%2==0){
    cout<<endl;}}
   i++;}
   i=0;
   som=0;
  while((i<(2*n))and(som<(som2))){
   if(vect[i]%2==1){
    som++;
   cout<<(i+1)<<" ";
   if(som%2==0){
    cout<<endl;}}
   i++;}}
 
 
  
  
  
 
 
 
 
 
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}