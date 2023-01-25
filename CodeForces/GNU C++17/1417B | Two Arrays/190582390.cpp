#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
 
  long long int t,n,r;
  cin>>t;
  while(t--){
   cin>>n>>r;
   vector<long long int >vect(n);
   for(long long int i(0);i<n;i++){
    cin>>vect[i];}
    long long int p=1;
    long double f=r;
   for(long long int i(0);i<n;i++){
    if(vect[i]<f/2){
     vect[i]=0;} 
    else if(vect[i]>f/2){
     vect[i]=1;}
    else{
     if(p%2==0){
      vect[i]=0;
      p+=1;}
     else{
      vect[i]=1;
      p+=1;}
     }}
    for(long long int i(0);i<n;i++){
     cout<<vect[i]<<" ";}
     cout<<endl;
   
   
  }
  
   
  
  
    return 0;
}