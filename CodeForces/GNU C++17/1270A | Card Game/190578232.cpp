#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
 
int main()
{
 fast; 
 long long int t,n,k1,k2;
 cin>>t;
 while(t--){
  cin>>n>>k1>>k2;
  vector<long long int>vect1(k1);
  vector<long long int>vect2(k2);
  for(long long int i(0);i<k1;i++){
   cin>>vect1[i];}
  for(long long int i(0);i<k2;i++){
   cin>>vect2[i];}
  if(*(max_element(vect1.begin(),vect1.end()))>*(max_element(vect2.begin(),vect2.end()))){
   cout<<"YES"<<endl;}
  else{
   cout<<"NO"<<endl;}
  }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}