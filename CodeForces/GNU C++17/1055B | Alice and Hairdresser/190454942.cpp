#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int n,m,l,p,d,t;
 cin>>n>>m>>l;
 vector<long long int>vect(n);
 long long int som=0;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];} 
  for(long long int i(0);i<(n-1);i++){
  if((vect[i]>l)and(vect[i+1]<=l))
  som++;}
  if(vect[n-1]>l)som++;
 for(long long int i(0);i<m;i++){
  cin>>t;
  if(t==1){
   cin>>p>>d;
   vect[p-1]+=d;
   if((vect[p-1]>l)and((vect[p-1]-d)<=l)){
    if((p==1)and(p==n))som++;
    else if((p==1)and(p<n)){ if(vect[p]<=l)som++;}
    else if ((p==n)and(p>1)){if(vect[p-2]<=l)som++;}
     else if(((vect[p-2]>l))and((vect[p]>l))){
     som--;}
    else if(((vect[p-2]>l))or((vect[p]>l))){som=som;}
    else som+=1;
    }}
  else{
  cout<<som<<endl;}
  }
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}