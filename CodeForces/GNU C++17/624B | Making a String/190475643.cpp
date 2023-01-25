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
  sort(vect.begin(),vect.end());
  long long int som=0;
  long long int i=0;
  for(i=n-1;i>=1;i--){
   som+=vect[i];
   if(vect[i]<=vect[i-1]){
    vect[i-1]=vect[i]-1;}
   if(vect[i-1]==0)break;}
  if(vect[i-1]!=0)
  {som+=vect[i];}
  cout<<som<<endl;
  
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}