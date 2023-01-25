#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long long int N=1e4;
int main()
{
 fast; 
 long long int t, n;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  long long int som1=0;
  long long int som2=0;
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
   if(vect[i]%2==0){
    som1++;}
   else {som2++;}}
  sort(vect.begin(),vect.end());
  if((som1%2==0)and(som2%2==0)){
   cout<<"YES"<<endl;}
  else if((som1%2==1)and(som2%2==0)){
   cout<<"NO"<<endl;}
  else if((som1%2==0)and(som2%2==1))
  {cout<<"NO"<<endl;}
  else{
   bool test=false;
   for(long long int i(0);i<(n-1);i++){
    if((vect[i+1]-vect[i])==1) {test=true;break;}}
  if(test==true)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
   }}
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}