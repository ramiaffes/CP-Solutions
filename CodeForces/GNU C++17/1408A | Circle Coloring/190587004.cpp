#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast; 
 long long int t,n; 
 
 cin>>t;
 while(t--){
  cin>>n;
 vecteur vect1(n);
 vecteur vect2(n);
 vecteur vect3(n);
 vecteur result(n);
  for(int i(0);i<n;i++){
   cin>>vect1[i];
   }
  for(int i(0);i<n;i++){
   cin>>vect2[i];
   }
  for(int i(0);i<n;i++){
   cin>>vect3[i];
   }
  result[0]=vect1[0]; 
  for (int i(1);i<n-1;i++){
   if(result[i-1]!=vect1[i]){
    result[i]=vect1[i];
    continue;}
   if(result[i-1]!=vect2[i]){
    result[i]=vect2[i];
    continue;}
   if(result[i-1]!=vect3[i]){
    result[i]=vect3[i];
    continue;}
   }
  if(result[0]!=vect1[n-1] and result[n-2]!=vect1[n-1]){
    result[n-1]=vect1[n-1];}
  else if(result[0]!=vect2[n-1] and result[n-2]!=vect2[n-1]){
    result[n-1]=vect2[n-1];}
  else {
    result[n-1]=vect3[n-1];}
  for (int i(0);i<n;i++){
   cout<<result[i]<<" ";}
   cout<<endl;
   }
  
  
  
  
  
 
 
 
 
 
  
  
  
 
 
 
 return 0;
}
 