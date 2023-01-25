#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
 
int main() {
 fast;
 long long int t,n,k;
 string s;
 cin>>t;
 while(t--){
  cin>>n>>k;
  vector<long long int>vect1(n);
  vector<long long int>vect2(n);
  for(long long int i(0);i<n;i++){
   cin>>vect1[i];
   cin>>vect2[i];}
  bool test=true;
  for(long long int j(0);j<(n);j++){
   test=true;
  for(long long int i(0);i<(n);i++){
  if(i!=j){
  test=(abs(vect1[j]-vect1[i])+abs(vect2[j]-vect2[i])<=k);
  if(test==false){break;}}
  
 }
 if(test==true){
  break;}}
 if(test==true){
  cout<<1<<endl;}
 else{
  cout<<-1<<endl;}
  
  
  
  
  
 }
  
  
 
   
   
  
    return 0;
}