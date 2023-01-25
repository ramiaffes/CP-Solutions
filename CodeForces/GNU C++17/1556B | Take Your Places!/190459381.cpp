#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int  n,t;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  long long int som1=0;
  long long int som2=0;
  long long int som=0;
  long long int com=0;
  for(long long int i(0);i<n;i++){cin>>vect[i];
   if(vect[i]%2==0)som1++;
   else som2++;}
  if(abs(som1-som2)>1)som=-1;
  else if(som1==(som2+1)){
   for(long long int i(0);i<n;i++){
   if((vect[i]%2==0)){
    som+=abs(i-com);
    com+=2;
    }}}
  else if(som2==(som1+1)){
   for(long long int i(0);i<n;i++){
   if((vect[i]%2==1)){
    som+=abs(i-com);
    com+=2;
    }
    }}
  else{long long int som4=0;
   long long int som5=0;
   for(long long int i(0);i<n;i++){
   
   if((vect[i]%2==1)){
    som5+=abs(i-com);
    com+=2;
    }}
    com=0;
    for(long long int i(0);i<n;i++){
   if((vect[i]%2==0)){
    som4+=abs(i-com);
    com+=2;
    }}
   som=min(som5,som4);
   }
   cout<<som<<endl;
  
  
  
  
  }
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}