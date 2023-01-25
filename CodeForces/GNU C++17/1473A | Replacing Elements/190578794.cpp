#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int fact(long long int n){
 long long int p=1;
 for(long long int i(1);i<=n;i++){
  p*=i;}
 return p;}
 
int main()
{
 fast; 
 long long int t,n,d;
 cin>>t;
 while(t--){
  cin>>n>>d;
  bool test=true;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];}
  for(long long int i(0);i<n;i++){
   if(vect[i]>d)test=false;}
  if(test==false){
  for(long long int i(0);i<(n-1);i++){
   for(long long int j(i+1);j<n;j++){
    if(((vect[i]+vect[j])<=d)){
    test=true;
    break;}
   }
    
    }}
   if(test==false)cout<<"no"<<endl;
   else cout<<"yes"<<endl;
  }
  
  
 
  
 
 
 
 return 0;
}