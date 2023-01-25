#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
 
int main()
{
 
 fast; 
 long long int t;
 cin>>t;
 
 while(t--){
  int n;
  long long int som(0);
  cin>>n;
  vecteur vect1(n);
 vecteur  vect2(n);
  for (int i(0);i<n;i++){
   cin>>vect1[i];}
  for (int i(0);i<n;i++){
   cin>>vect2[i];}
   auto it1=min_element(vect1.begin(),vect1.end());
   auto it2=min_element(vect2.begin(),vect2.end());
   if (n==1){cout<<0<<endl;}
   else{
   for (int i(n-1);i>=0;i--){
    som+=max(vect1[i]-*(it1),vect2[i]-*(it2));}
  cout<<som<<endl;}}
  
  
  
  
  
  
  
 
  
  
  
  
  
 
 
 
 
 
  
  
  
 
 
 
 return 0;
}