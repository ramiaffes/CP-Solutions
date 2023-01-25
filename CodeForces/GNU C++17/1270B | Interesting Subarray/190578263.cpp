#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
 
int main()
{
 fast; 
 long long int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect1(n);
  for(long long int i(0);i<n;i++){
   cin>>vect1[i];}
  bool test=false;
  long long int i=0;
  while(i<(n-1)){
   test=(max(vect1[i+1],vect1[i])-min(vect1[i+1],vect1[i]))>=2;
   if(test==true){
    break;}
   i+=1;
  }
 if((test==false)or(n==1)){
  cout<<"NO"<<endl;}
 else{
  cout<<"YES"<<endl;
  cout<<(i+1)<<" "<<(i+2)<<endl;}}
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}