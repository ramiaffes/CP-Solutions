#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 long long int comp=0;
 long long int som1=0;
 long long int som2=0;
 long long int i=0;
 long long int j=n-1;
 while(i<j){
  if(vect[i]<vect[j]){
   if(comp%2==0)som1+=vect[j];
   else som2+=vect[j];
   j--;}
  else{
   if(comp%2==0)som1+=vect[i];
   else som2+=vect[i];
   i++;
   }
   comp++;}
  if(i==j){
   if(comp%2==0)som1+=vect[i];
   else som2+=vect[i];}
  cout<<som1<<" "<<som2<<endl;
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}