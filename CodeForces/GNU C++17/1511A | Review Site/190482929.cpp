#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int t;
 long long int n;
 long long int a;
 long long int k;
 long long int kh;
 cin>>t;
 for(long long int d(1);d<=t;d++){
  cin>>n;
  vector<long long int>vect(n);
  long long int som=0;
  for(long long int i(0);i<n;i++){
   cin>>vect[i];}
  for(long long int i(0);i<n;i++){
   if((vect[i]==1)or(vect[i]==3)){
    som++;
    }}
  cout<<som<<endl;
  
  
 
 }
   
  
  
  
  
  
  
     
  
  
  
 
  
  
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}