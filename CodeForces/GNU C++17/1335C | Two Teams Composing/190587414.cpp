#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast; 
 int t,n; 
 
 cin>>t;
 while(t--){
  cin>>n;
  vecteur vect(n);
  for (int i(0);i<n;i++){
   cin>>vect[i];}
  sort(vect.begin(),vect.end());
  int m=vect[0];
  int som(1);
  int max(1);
  int r(1);
  for (int i(1);i<n;++i){
   if  (vect[i]==m){
    som++; }
   else{
    if (som>max){
     max=som;}
    som=1;
    m=vect[i];
    r+=1;}}
  if (som>max){
    max=som;}
  
  if (max>r)
{ cout<<r<<endl;} 
else if (max==r){cout<<max-1<<endl;}
else {
 cout<<max<<endl;}
 
   }
  
  
  
  
  
 
 
 
 
 
  
  
  
 
 
 
 return 0;
}