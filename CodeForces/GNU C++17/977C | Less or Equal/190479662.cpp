#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int  n, k;
 cin>>n>>k;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
 }
 sort(vect.begin(),vect.end());
 if(k==0){
  if(vect[0]==1)cout<<-1<<endl;
  else cout<<(vect[0]-1)<<endl;}
 else if(k==n){
  cout<<(vect[n-1])<<endl;
  }
 else if(vect[k-1]==vect[k]){
  cout<<-1<<endl;}
 else{
  cout<<vect[k-1]<<endl;}
 
 
 
 
 
 
 
 
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}