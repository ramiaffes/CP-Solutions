#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 long long int som1=0;
 long long int som2=0;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  if(vect[i]==1)som1++;
  else som2++;
  }
 
  if(som2){
 cout<<2<<" ";;}
 if(som1){cout<<1<<" ";}
 for(long long int i(0);i<(som2-1);i++){
  cout<<2<<" ";
  }
 for(long long int i(0);i<(som1-1);i++){
  cout<<1<<" ";
   }
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}