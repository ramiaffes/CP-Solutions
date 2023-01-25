#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
 
  long long int t,x;
  cin>>t;
  while(t--){ 
   cin>>x;
   if(x==1){
    cout<<1<<endl;}
  else{
   vector<long long int>vect;
   long long int i=1;
   while(((i+1)*(i)/2)<x){
    i++;
    }
   if(x==(i+1)*(i)/2){
    cout<<i<<endl;}
   else if(x!=(i*(i+1)/2-1)){
    cout<<i<<endl;}
   else{
    cout<<(i+1)<<endl;}
 
    
   }}
  
  return 0;}