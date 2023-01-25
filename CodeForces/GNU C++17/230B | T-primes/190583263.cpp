#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is_tprime(long long int num){
 if(num==1){
  return false;}
 else if ((num==4) or(num==9)){
  return true;}
 else {
  if(num%2==0){
   return false;}  
   else{
  long double res1=floor(sqrt(num));
  long long int re=res1;
  if ((num%re!=0) or(res1!=sqrt(num))){
   return false;}
  else if(sqrt(re)<=2){
   return false;}
  else{
  for(long  long int i(3);i<=sqrt(re);i+=2){
   if ((num%i==0)){
    return false;}}return true;}}
   }}
int main() {
 fast;
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  if (is_tprime(vect[i])){
   cout<<"YES"<<endl;}
  else{
   cout<<"NO"<<endl;}}
 
 
    return 0;
}
  
  
 
 
  
 
 
 
    
    