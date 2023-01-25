#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
int t;
int n;
cin>>t;
 
while(t--){
 cin>>n;
 long long int som1(0);
 long long int som2(0);
 vector<long long int>vect(n);
 for(int i(0);i<n;i++){
  cin>>vect[i];}
 for(int i(0);i<n;i++){
  if(i%2==0){
   if(vect[i]%2!=0){
    som1++;}}
 else{
  if (vect[i]%2!=1){
   som2++;}}}
 if(som1!=som2){
  cout<<-1<<endl;}
 else{
  cout<<(som1)<<endl;}
 
  
   
 
 
 
   
   
  }
  
   
    
    
 
    
   
    
    
    return 0;
}