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
 int n;
 
 while(t--){
  cin>>n;
  vecteur vect (n);
  cin>>vect[0];
  bool res=true;
  if(n==1){cout<<"YES"<<endl;}
  else{
   
  for (int i(1);i<n;i++){
   cin>>vect[i];
   }
   sort(vect.begin(),vect.end());
   for (int i(1);i<n;i++){res=res and (abs(vect[i]-vect[i-1])<=1);}
  
  if (res){
   cout<<"YES"<<endl;}
  else{
   cout<<"NO"<<endl;}}}
  
 
  
  
  
  
  
 
 
 
 
 
  
  
  
 
 
 
 return 0;
}