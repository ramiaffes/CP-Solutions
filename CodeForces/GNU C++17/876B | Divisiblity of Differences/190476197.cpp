#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int k,n,m;
 cin>>n>>k>>m;
 vector<long long int>vect(n);
 bool test=false;
 long long int val=0;
 vector<long long int>remainder(m);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  }
  for(long long int i(0);i<n;i++){
  remainder[vect[i]%m]++;
  if(remainder[vect[i]%m]==k){
   test=true;
   val=vect[i]%m;
   break;}}
 if(test==false)cout<<"No"<<endl;
 else{
  long long int som=0;
  cout<<"Yes"<<endl;
  for(long long int i(0);i<n;i++){
   if((vect[i]%m)==val){
    cout<<vect[i]<<" ";
    som++;}
   if(som==k)break;}}
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}