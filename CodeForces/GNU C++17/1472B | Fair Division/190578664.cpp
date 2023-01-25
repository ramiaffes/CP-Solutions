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
   if(vect[i]==1){
   som1+=1;}
   else {som2+=1;}}
   if(som1%2==1){
    cout<<"NO"<<endl;}
   else if(som2%2==0){
    cout<<"YES"<<endl;}
   else if(som1>=2){
    cout<<"YES"<<endl;}
   else{
    cout<<"NO"<<endl;}
  
  
  
  
  
  
}
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}