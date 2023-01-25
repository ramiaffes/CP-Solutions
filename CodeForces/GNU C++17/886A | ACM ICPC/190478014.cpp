#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
  vector<long long int>vect(6);
  long long int som=0;
  for(long long  int i(0);i<6;i++){
   cin>>vect[i];
   som+=vect[i];}
  long long int som1=0;
  for(long long int i(0);i<(4);i++){
   for(long long int j(i+1);j<5;j++){
    for(long long int d(j+1);d<6;d++){
     som1=vect[i]+vect[j]+vect[d];
     if(som1==(som-som1)){
      break;}}
     if(som1==(som-som1)){
      break;}
    }
   if(som1==(som-som1)){
      break;}
   }
  if(som1==(som-som1))cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}