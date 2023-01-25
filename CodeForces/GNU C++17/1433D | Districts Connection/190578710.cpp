#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int t,n,w,h;
 cin>>t;
 string s;
 while(t--){
  cin>>n;
  long long int som1=0;
  long long int som2=0;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
  }
  long long int i=0;
  while((vect[0]==vect[i])and(i<n)){
   i++;}
  if(i==n){
   cout<<"NO"<<endl;}
  else{
   cout<<"YES"<<endl;
   for(long long int j(1);j<n;j++){
    if(vect[0]!=vect[j]){
     cout<<1<<" "<<(j+1)<<endl;}
    else{
     cout<<(i+1)<<" "<<(j+1)<<endl;}
    
    }}
  
  
  
  
  
  
}
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}